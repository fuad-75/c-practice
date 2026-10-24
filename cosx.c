#include<stdio.h>
double power(double x, int n);
double factorial(int n);
int main(){
    double x, term=1,sum=0;
    int n=0;
    printf("Enter the value of x:");
    scanf("%lf",&x);
    int i=2;
    while(term>0.0001){
        sum=sum+power(-1,i)*term;
        n=n+2;
        term=power(x,n)/factorial(n);
        i++;
    }
    printf("%lf",sum);
}
double power(double x, int n){
    if(n==1) return x;
    return x*power(x,n-1);
}
double factorial(int n){
    if(n==1) return 1;
    return n*factorial(n-1);
}
