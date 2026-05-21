#include<stdio.h>
int main(){
    int n;
    int digit =0;
    //int su = 0;
    printf("enter a number :");
    scanf("%d",&n);
    int sum=0;
    while(n!=0){
           digit =n/10;
           if(digit%2==0){
            sum =sum + digit;
            printf("the sum of digits:%d",sum);
           }
    }
  
    return 0;
}