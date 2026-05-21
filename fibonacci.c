#include<stdio.h>
int main(){
    int n ;
   int  sum =1;
    printf("enter a number");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
   sum = sum + i;
    printf("%d\n",sum);}



    return 0;
}