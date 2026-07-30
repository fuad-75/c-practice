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
