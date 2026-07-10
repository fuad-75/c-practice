#include<stdio.h>
int main(){
    int n,m;
    printf("Enter order:");
    scanf("%d",&n);
    for(int g=1;g<=(2*n-1);g++){
        printf("%d",g);
    }
    printf("\n");
    m=n-1;
    int nst=m;
    int nsp=1;
    int a;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=nst;j++){
            printf("%d",j);
            a=2*n-j;
        }
        for(int k=1;k<=nsp;k++){
            printf(" ");
        }
        for(a;a<=(2*n-1);a++){
            printf("%d",a);
        }
        nsp+=2;
        nst--;
        printf("\n");
        
    }
}
//or
#include<stdio.h>
int main(){
    int n,m;
    printf("Enter order:");
    scanf("%d",&n);
    for(int g=1;g<=(2*n-1);g++){
        printf("%d",g);
    }
    printf("\n");
    m=n-1;
    int nst=m;
    int nsp=1;
    
    for(int i=1;i<=m;i++){
        int a=1;
        for(int j=1;j<=nst;j++){
            printf("%d",a);
            a++;
        }
        for(int k=1;k<=nsp;k++){
            printf(" ");
            a++;
        }
        for(int j=1;j<=nst;j++){
            printf("%d",a);
            a++;
        }
        nsp+=2;
        nst--;
        printf("\n");
        
    }
}
