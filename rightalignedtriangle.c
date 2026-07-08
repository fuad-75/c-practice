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
//Alternative
#include<stdio.h>
int main(){
    int n;
    int a;
    char ch='*';
    printf("Enter the order you want:");
    scanf("%d",&n);
    int j=1;
    for(int i=1;i<=n;i++){
            int a=65;
        for(int j=1;j<=n;j++){
            if((j==n)||(i==n)||((i+j)>n)){
            printf("%c",a);
            a=a+1;}
            else
            printf(" ");
        }
        printf("\n");
        
    }
}
