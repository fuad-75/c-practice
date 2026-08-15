#include<stdio.h>
int rotate(int a[],int m,int b);
int main(){
    int n,index,num;
    printf("Enter the order of the array:");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the rotation number:");
    scanf("%d",&num);
    num=num%n;
    rotate(a,0,num-1);
    rotate(a,num,n-1);
    rotate(a,0,n-1);
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    
}
int rotate(int a[],int m,int b){
    for(int i=m,j=b;i<j;i++,j--){
        int temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
    

}
