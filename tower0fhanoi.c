#include<stdio.h>
void hanoi(int n,char s,char h,char d);
int count=0;
int main(){
    int n;
    char s='A';
    char h='B';
    char d='C';
    scanf("%d",&n);
    hanoi(n,s,h,d);
    printf("Total %d steps.",count);
}
void hanoi(int n,char s,char h,char d){
    if(n==1){
    printf("%c->%c\n",s,d);
     count ++;
    }
    else{
        hanoi(n-1,s,d,h);
        printf("%c->%c\n",s,d);
        count ++;
        hanoi(n-1,h,s,d);
        
    }
    
}
