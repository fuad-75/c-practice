#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
void matrix_create(int***a,int row,int col );
int main(){
    int **b,row,col;
    printf("Enter the no of rows and columns:");
    scanf("%d %d",&row,&col);
    matrix_create(&b,row,col);
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf("%d ",*(*(b+i)+j));
        }
        printf("\n");
    }
    for(int i=0;i<row;i++){
        if(*(b+i)!=NULL)
        free(*(b+i));
    }
    free(b);
    b=NULL;
}
void matrix_create(int***a,int row,int col){
    *a=(int**)malloc(row*sizeof(int*));
    assert(*a!=NULL);
    for(int i=0;i<row;i++){
        *(*a+i)=(int*)malloc(col*sizeof(int));
        assert(*(*a+i)!=NULL);
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            scanf("%d",*(*a+i)+j);
        }
    }
}
