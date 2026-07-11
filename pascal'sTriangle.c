#include<stdio.h>
int factorial(int m);
int main(){
    int n,r,nr;
    printf("Enter the order of pascal's triangle:");
    scanf("%d",&n);
    int nsp=n;
    for(int u=1;u<=n+1;u++){
        printf(" ");
    }
    printf("%d\n",1);
    for(int i=1;i<=n;i++){
        for(int k=1;k<=nsp;k++){
            printf(" ");
        }
        for(int r=0;r<=n;r++){
            
    int nFact=factorial(i);
    int rFact=factorial(r);
    int nrFact=factorial(i-r);
    int result=nFact/(rFact*nrFact);
    if(result!=0)
    printf("%d",result);
    printf(" ");
        }
        printf("\n");
        nsp--;
    }
}
int factorial(int m){
    int sum=1;
    for( int i=1;i<=m;i++){
        sum=sum*i;
    }
    return sum;
}
