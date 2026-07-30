
#include <stdio.h>

int main()
{
    int old_row,old_col, n,m,sum=0,row,col,counter=0;
    printf("Enter the number of rows:");
    scanf("%d",&old_row);
    printf("Enter the number of coloumns:");
    scanf("%d",&old_col);
    // int arr_a[2][2]={1,2,3,4};
    // int arr_b[2][2]={1,2,3,4};
    int arr[old_row][old_col];
    
    for(int i=0;i<old_row;i++){
        for(int j=0;j<old_col;j++){
            scanf("%d",&arr[i][j]);
            
        }
        // printf("\n");
    }
    int new_row=old_col;
    int new_col=old_row;
    
    
    // int max=0;
    int brr[new_row][new_col];
    for(int i=0;i<old_row;i++){
        
        for(int j=0;j<old_col;j++){
            
                brr[i][j]=arr[j][i];
                
            
            }
    }
        // if(counter>max){
        //     max=counter;
        //     row=i;
        // }
            
    
    if(old_col%2!=0){
        for(int i=0;i<=(old_col-1);i++){
        for(int j=0;(j!=((old_col+1)/2)&& j<=(old_col));j++){
            int temp=brr[i][old_col-1-j];
            brr[i][old_col-1-j]=brr[i][j];
            brr[i][j]=temp;
            
            
            // brr[i][j]=brr[i][old_col-1-j];
        }
    }
    }
    else{
        for(int i=0;i<=(old_col-1);i++){
        for(int j=0; j<(old_col)/2;j++){
            int temp=brr[i][old_col-1-j];
            brr[i][old_col-1-j]=brr[i][j];
            brr[i][j]=temp;
            
            
            // brr[i][j]=brr[i][old_col-1-j];
        }
    }
    }
    printf("\n");
    for(int i=0;i<new_row;i++){
        for(int j=0;j<new_col;j++){
            printf("%d ",brr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
/*
   1 0 0 0
   0 1 0 0
   0 0 1 0
   0 0 0 1 
   */
