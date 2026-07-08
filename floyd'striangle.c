#include<stdio.h>
int main(){
    int n;
    char ch='*';
    printf("Enter the order you want:");
    scanf("%d",&n);
    int j=1;
    for(int i=1;i<=n;i++){
        for(;j<=((i+1)*i)/2;j++){
            printf("%d",j);
            
            
        }
        printf("\n");
        
    }
}
