#include <stdio.h>

int main() {
    int n;
    printf("Enter the order: ");
    scanf("%d", &n);
    
    char ch = '*';
    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= (2 * n - 1); j++) {
            
            // Left boundary: (i + j >= n + 1)
            // Right boundary: (j - i <= n - 1)
            if ((i + j >= n + 1) && (j - i <= n - 1)) {
                printf("%c", ch);
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    
    return 0;
}
