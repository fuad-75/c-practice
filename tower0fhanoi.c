#include<stdio.h>
void tower_hanoi(int n,char s,char h, char d);
int main(){
    int n;
    printf("Enter the order of Tower of Hanoi:");
    scanf("%d",&n);
    tower_hanoi(n,'A','B','C');
}
void tower_hanoi(int n,char s,char h, char d){
    if(n==0) return;
    tower_hanoi(n-1,s,d,h);
    printf("%c->%c\n",s,d);
    tower_hanoi(n-1,h,s,d);
}
