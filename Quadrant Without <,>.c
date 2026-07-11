#include<stdio.h>
#include<stdlib.h>
int main(){
    int x,y;
    printf("Enter the abscissa:");
    scanf("%d",&x);
    printf("Enter the ordinate:");
    scanf("%d",&y);
    int x1=abs(x);
    int y1=abs(y);
    
    int r3=(x*y);
    switch(r3){
        case 0:
        {
            switch(x){
                case 0:{
                    switch(y){
                        case 0:
                        printf("Origin!");
                        break;
                        default:
                        printf("Y axis");
                        break;
                    }
                    
                    
                        }
                break;
                default:
                printf("X axis");
                break;
            }
        }
        break;
        default:
        int r1=(x*y)/(x1*y1);
        switch(r1){
        case 1:
        {
            int add=(x+y)-(x1+y1);
            switch(add){
                case 0:
                printf("First Co-ordinate");
                break;
                default:
                printf("Third Co-ordinate");
                break;
            }
        }
        break;
        case -1:
        {
            
            int r2=y1/y;
            switch(r2){
                case -1:
                printf("4th Quadrant!");
                break;
                default:
                printf("2nd Quadrant!");
                break;
                
            }
        }
        break;
        default:
        
        
        
        
    }
    break;
    }
    return 0;
    
    
    
}
