#include<stdio.h>
int main(){
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    int r=0;
    int sum=0;
    while(n>0)
    r=r+(n/10);
    r=r*10;
    n=n/10;
    sum=n+r;
    printf("the sum :%d ",sum);
    return 0;
}