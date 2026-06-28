#include<stdio.h>
int main(){
    int n,k;
    printf("Enter a number:");
    scanf("%d",&n);
    int isPrime=0;
    if(n==2){
        printf("It is Prime");
        return 0;
    }
    if(n==1){
        printf("It is not prime");
        return 0;
    }
    for(int i=2;i<n;i++){
        k=n%i;
        if(k==0){
            isPrime=1;
            break;
        }
    }
    if(isPrime==0){
        printf("%d is a prime number:",n);
    }
    else{
        printf("%d is not a prime number",n);
    }
}
