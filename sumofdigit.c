#include<stdio.h>
int main(){
    int n;
    printf("enter a number ");
    scanf("%d",&n);
    int sum =0;
    int  digites =0;
    while(n!=0){
        digites=n%10;
        sum =sum+digites;
        n=n/10;
        
        printf("sum is digites %d",sum);
        // break;


    }
    return 0;

}