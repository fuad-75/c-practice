#include<stdio.h>
#include<math.h>

int main(){
   //the root is between 1 and 1.5
   //we are considering x0=1 
   double x0=1;
   double x1,x,fx,dfx;
   for(;;){
       
       fx=pow(x0,5)+3*x0*x0-10;
       dfx=5*(pow(x0,4))+6*x0;
       x1=x0-(fx/dfx);
       if(x1==x0){
           printf("The solution is :%lf",x1);
           return 0;
       }
       x0=x1;
       
   }
}
