#include<stdio.h>
int main(){
    int n;
    char c='*';
    printf("Enter the order:");
    scanf("%d",&n);
    int k=1;
    for(int i=1;i<=n;i++){
       
        for(k=1;k<=(n-i);k++){
            printf(" ");
        }
        for(int j=1;j<=(2*i-1);j++){
            printf("%c",c);
        }
        printf("\n");
    }
    int m;
    for(int i=n-1;i>=1;i--){
        for(m=n-i;m>=1;m--){
            printf(" ");
        }
        for(int j=1;j<=(2*i-1);j++){
            printf("%c",c);
        }
        printf("\n");
    }
}
//If total line =n===  n==(n/2)+1;
