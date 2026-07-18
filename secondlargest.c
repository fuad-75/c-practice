#include<stdio.h>
#include<limits.h>
int main(){
    int n,x,counter=0,max,k,smax;
    printf("How much number you want to take:");
    scanf("%d",&n);
    int array[n];
     smax=INT_MIN;
    printf("Enter the numbers:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    max=array[0];
    for(int j=0;j<n;j++){
         
        if(array[j]>=max){
            max=array[j];
            
        }
    }
    for(int k=0;k<n;k++){
         
        if(array[k]!=max &&array[k]>smax){
            smax=array[k];
            
            
        }
    }
    printf("%d",smax);
    
    
    
    
}
