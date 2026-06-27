#include <stdio.h>

int main()
{
    int n,m,k;
    printf("Enter a number:");
    scanf("%d",&n);
    m=0;
    for(int i=10;;i*=10)
    {
        k=n/i;
        m=m+1;
        if(k==0){
            printf("The total number of digits is :%d",m);
            return 0;
        }
    }

    return 0;
}
