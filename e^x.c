#include<stdio.h>
double power(double x, int n);
double factorial(int n);
int main(){
    double x, term=1,sum=0;
    int n=1;
    printf("Enter the value of x:");
    scanf("%lf",&x);
    while(term>0.0001){
        sum=sum+term;
        term=power(x,n)/factorial(n);
        n++;
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
