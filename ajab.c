#include <stdio.h>

int main() {
    int n;
    printf("Enter the order: ");
    scanf("%d", &n);
    int a;
    char ch = '*';
    
    for (int i = 1; i <= n; i++) {
        for(int k=1;k<=(n-i);k++){
            printf(" ");
        }
        a=65;
        for(int j=1;j<=i;j++){
            //if(j<=i)
            printf("%d",j);
            int back;
            back=j;
            if(j==i){
                for(j=i-1;j>=1;j--)
                printf("%d",j);
            }
            j=back;
            
            
        }
        printf("\n");
    }
    
    return 0;
}
