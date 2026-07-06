#include<stdio.h>
#include<math.h>
int main(){
    int n;
    printf("Enter the term of fibonacci number:");
    scanf("%d",&n);
    int f1=1;
    int f2=1;
    if(n==1||n==2){
        printf("The term is %d",f1);
        return 0;
    }
    int sum=0;
    for(int i=3;i<=n;i++){
        sum=f1+f2;
        f1=f2;
        f2=sum;
        if(i==n){
            printf("The term is %d",f2);
            return 0;
        }
    }
    
}
