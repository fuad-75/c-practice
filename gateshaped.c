#include<stdio.h>
int main(){
    int n,m;
    printf("Enter order:");
    scanf("%d",&n);
    for(int g=1;g<=(2*n-1);g++){
        printf("*");
    }
    printf("\n");
    m=n-1;
    int nst=m;
    int nsp=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=nst;j++){
            printf("*");
        }
        for(int k=1;k<=nsp;k++){
            printf(" ");
        }
        for(int j=1;j<=nst;j++){
            printf("*");
        }
        nsp+=2;
        nst--;
        printf("\n");
        
    }
}
