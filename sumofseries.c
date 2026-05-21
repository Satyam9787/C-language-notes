#include<stdio.h>
int main(){
    int n;
    int sum=0;
    printf("enter the the number :");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(n%2==0)
        sum=-n/2;
        else{
        sum=-n/2+n;
        }
    }printf("the sum of series is =%d",sum);
    return 0;
}