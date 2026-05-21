#include<stdio.h>
int main(){
    int n, a, b, sum ;
    printf("enter a number");
    scanf("%d",&n);
    a=1;b=1;
    for(int i=1;i<=n-2;i++) {
    sum=a+b;
    a=b;
    b=sum;
        printf("%d ",sum);}


    return 0;
}