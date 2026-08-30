#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
int main(){
    int **m,**trans,row,col;
    printf("Enter the order:");
    scanf("%d %d",&row,&col);
    m=(int**)malloc(row*sizeof(int*));
    assert(m!=NULL);
    for(int i=0;i<row;i++){
        *(m+i)=(int*)malloc(col*sizeof(int));
        assert(*(m+i)!=NULL);
    }
    trans=(int**)malloc(col*sizeof(int*));
    assert(trans!=NULL);
    for(int i=0;i<col;i++){
        *(trans+i)=(int*)malloc(row*sizeof(int));
        assert(*(trans+i)!=NULL);
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            scanf("%d",*(m+i)+j);
        }
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            *(*(trans+j)+i)=*(*(m+i)+j);
        }
    }
    for(int i=0;i<col;i++){
        for(int j=0,k=row-1-j;j<k;j++,k--){
            int temp=*(*(trans+i)+j);
            *(*(trans+i)+j)=*(*(trans+i)+k);
            *(*(trans+i)+k)=temp;
        }
    }
    for(int i=0;i<col;i++){
        for(int j=0;j<row;j++){
            printf("%d ",*(*(trans+i)+j));
        }
        printf("\n");
    }
    
}
