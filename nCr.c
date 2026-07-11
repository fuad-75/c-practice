#include<stdio.h>
int factorial(int m);
int main(){
    int n,r,nr;
    printf("Enter the value of n:");
    scanf("%d",&n);
    printf("Enter the value of r:");
    scanf("%d",&r);
    int nFact=factorial(n);
    int rFact=factorial(r);
    int nrFact=factorial(n-r);
    int result=nFact/(rFact*nrFact);
    printf("The value of nCr is %d",result);
}
int factorial(int m){
    int sum=1;
    for( int i=1;i<=m;i++){
        sum=sum*i;
    }
    return sum;
}
