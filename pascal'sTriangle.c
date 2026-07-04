#include<stdio.h>
int factorial(int f);
int main(){
    int t,N,n,r;
    printf("Enter the order of pascal's triangle:");
    scanf("%d",&t);
    if(t==0){
        printf("1");
        return 0;
    }
    if(t==1){
        printf("1   1");
        return 0;
    }
    for(int N=0;N<=t;N++){
    for(r=0,n=N;r<=n;r++){
        int factn=factorial(n);
        int factr=factorial(r);
        int factnr=factorial(n-r);
        int result=factn/(factr*factnr);
        printf("%d\t",result);
        
    }
    printf("\n");
    }
    return 0;
}
int factorial(int f){
    int sum=1;
    for(int i=1;i<=f;i++){
       sum=sum*i;
    }
    return sum;
}
