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
//OR
#include<stdio.h>
int main(){
    int n;
    char ch='*';
    printf("Enter the order you want:");
    scanf("%d",&n);
    int a=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j+=1){
            printf("%d",a);
            a++;
            
        }
        printf("\n");
        
    }
}
