#include<stdio.h>
#include<math.h>

int main(){
   int total,x,f,f1=0,sum=0;
   printf("Enter the total number:");
   scanf("%d",&total);
   for(int i=1;;){
       printf("Enter the quantity:");
       scanf("%d",&f);
       printf("Enter the weight:");
       scanf("%d",&x);
       sum=sum+x*f;
       f1=f1+f;
       if(f1==total){
           float avg=sum/total;
           printf("The weightened avg is %f",avg);
           return 0;
       }
   }
}
