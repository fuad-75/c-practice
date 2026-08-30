#include<stdio.h>
int main(){
    int row_1,col_1,row_2,col_2,j,sum=0;
    printf("Enter the number of rows of 1st Matrix:");
    scanf("%d",&row_1);
    printf("Enter the number of coloumns of 1st Matrix:");
    scanf("%d",&col_1);
    int A[row_1][col_1];
    for(int i=0;i<row_1;i++){
        for(int j=0;j<col_1;j++){
            scanf("%d",&A[i][j]);
            }
        }
    printf("Enter the number of rows of 2st Matrix:");
    scanf("%d",&row_2);
    printf("Enter the number of coloumns of 2st Matrix:");
    scanf("%d",&col_2);
    int B[row_2][col_2];
    if(col_1!=row_2){
        printf("Multiplication is not possilble");
        return 0;
    }
    for(int i=0;i<row_2;i++){
        for(int j=0;j<col_2;j++){
            scanf("%d",&B[i][j]);
            }
        }
    int result[row_1][col_2];
    for(int i=0;i<row_1;i++){
        for( j=0;j<col_2;j++){
            sum=0;
            for(int k=0;k<col_1;k++){
                
                sum=sum+A[i][k]*B[k][j];
                
            }
        
        result[i][j]=sum;
    }
    }
    printf("\n");
    for(int i=0;i<row_1;i++){
        for( j=0;j<col_2;j++){
            printf("%d ",result[i][j]);
        
    }
    printf("\n");
    
}
}
// With pointers
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
void matrix_create(int***a,int row,int col );
void multiplication(int **p,int**q,int**r,int row_1,int col_1,int col_2);
void free_matrix(int ***f,int row);

int main(){
    int **m_1,**m_2,row_1,col_1,row_2,col_2;
    int **result;
    printf("Enter the order of the first matrix:");
    scanf("%d %d",&row_1,&col_1);
    matrix_create(&m_1,row_1,col_1);
    for(int i=0;i<row_1;i++){
        for(int j=0;j<col_1;j++){
            scanf("%d",*(m_1+i)+j);
        }
    }
    printf("Enter the order of the second matrix:");
    scanf("%d %d",&row_2,&col_2);
    matrix_create(&m_2,row_2,col_2);
    for(int i=0;i<row_2;i++){
        for(int j=0;j<col_2;j++){
            scanf("%d",*(m_2+i)+j);
        }
    }
    if(row_2!=col_1){
        printf("Multiplication is not possible!");
        return 0;
    }
    matrix_create(&result,row_1,col_2);
    multiplication(m_1,m_2,result,row_1,col_1,col_2);
    
    free_matrix(&m_1,row_1);
    free_matrix(&m_2,row_2);
    free_matrix(&result,row_1);
    
}
void matrix_create(int***a,int row,int col){
    *a=(int**)malloc(row*sizeof(int*));
    assert(*a!=NULL);
    for(int i=0;i<row;i++){
        *(*a+i)=(int*)malloc(col*sizeof(int));
        assert(*(*a+i)!=NULL);
    }
    
}
void multiplication(int **p,int**q,int**r,int row_1,int col_1,int col_2){
    for(int i=0;i<row_1;i++){
        for(int j=0;j<col_2;j++){
            int sum=0;
            for(int k=0;k<col_1;k++){
                sum=sum+(*(*(p+i)+k))*(*(*(q+k)+j));
            }
            *(*(r+i)+j)=sum;
        }
    }
    printf("The result matrix is:\n");
    for(int i=0;i<row_1;i++){
        for(int j=0;j<col_2;j++){
            printf("%d ",*(*(r+i)+j));
        }
        printf("\n");
    }
}
void free_matrix(int***f,int row){
    for(int i=0;i<row;i++){
        if(*(*f+i)!=NULL)
        free(*(*f+i));
    }
    free(*f);
    *f=NULL;
}
