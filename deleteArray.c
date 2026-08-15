#include<stdio.h>
int delete(int a[],int n,int num,int index);
int main(){
    int n,index,num;
    printf("Enter the order of the array:");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the number and the index sequencially:");
    scanf("%d %d",&num,&index);
    n=delete(a,n,num,index);
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    
}
int delete(int a[],int n,int num,int index){
    for(int i=index;i<n;i++){
        a[i]=a[i+1];
    }
    
    return n-1;
}
