#include<stdio.h>
#include<limits.h>
int main(){
    int n,k,j,isPalindrome=0;
    printf("Enter the order of array:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        j=n-1-i;
        // int temp_a=arr[i];
        // arr[i]=arr[j];
        // arr[j]=temp_a;
        if(arr[i]==arr[j])
        isPalindrome++;
    }
    if(n%2==0){
        if(isPalindrome==n)
        printf("Palindrome");
        else
        printf("Not Palindrome");
    }
    if(n%2!=0){
        if(isPalindrome==n)
        printf("Palindrome");
        else
        printf("Not Palindrome");
    }
    
}
