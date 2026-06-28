#include <stdio.h>
#include<math.h>

int main()
{
    int n,m,k,k1,f1,sum;
    printf("Enter a number:");
    scanf("%d",&n);
    m=0;
    for(int i=10;;i*=10)
    {
        k=n/i;
        m=m+1;
        if(k==0){
            
            break;
        }
    }
    sum=0;
    for(int i=pow(10,m-1);;i=i/10){
        k1=n/i;
        f1=n%i;
        n=f1;
        sum=sum+k1;
        if(i==1){
            
            printf("The sum is :%d",sum);
            return 0;
        }
    }
    

    return 0;
}
// Alternate and Fast Solution:
#include<stdio.h>
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    int sum=0;
    while(n>0){
        sum=sum+n%10;
        n=n/10;
    }
    printf("The sum is %d",sum);
}
