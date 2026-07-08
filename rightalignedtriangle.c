#include<stdio.h>
int main(){
    int n;
    char ch='*';
    printf("Enter the order you want:");
    scanf("%d",&n);
    int j=1;
    for(int i=1;i<=n;i++){
        
        for(int j=1;j<=n;j++){
            if((j==n)||(i==n)||((i+j)>n))
            printf("%c",ch);
            else
            printf(" ");
        }
        printf("\n");
        
    }
}
