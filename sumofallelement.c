#include<stdio.h>

int main(){
    int n;
    printf("enter the arr size" );
    scanf("%d",&n);
    int arr[n];
    int sum=0;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);//same to same peoduct of all element ka program lika jata hai usme 1 se variabale ko declare kiya jata hai
        
    }
    for(int i=0;i<n;i++)
    {
        sum=sum+arr[i];
        
        
    }
        printf("%d\n",sum);
    return 0;
}