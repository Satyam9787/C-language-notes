#include<stdio.h>
int main(){
    int product=1;
    int n;
    printf("enter a num");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    product=product*i;
    printf("the factorial is=%d",product);
    
    return 0;
}