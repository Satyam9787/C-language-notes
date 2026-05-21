#include<stdio.h>
int main(){
    int a;
    printf("enter   number a");
    scanf("%d\n " ,&a);
    
    int b;
    printf("enter   number b");
    scanf("%d\n " ,&b);
    int s;
    s=a;
    a=b;
    b=s;
    printf("the num is =%d\n",a);
     printf("the num is =%d",b);
    return 0;

}