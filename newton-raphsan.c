#include<stdio.h>
#include<math.h>

int main(){
   //the root is between 1 and 1.5
   //we are considering x0=1 
   int x0;
   double x1,x,fx,dfx;
   for(double i=1;;){
       x=i;
       fx=pow(x,5)+3*x*x-10;
       dfx=5*(pow(x,4))+6*x;
       x1=i-(fx/dfx);
       if(x1==i){
           printf("The solution is :%lf",i);
           return 0;
       }
       i=x1;
       
   }
}
