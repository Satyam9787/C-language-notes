#include<stdio.h>
int main(){
    int n;
    printf("enter a number ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
    int a=1;
    for(int j=1;j<=i;j++){
        char ch=(char)a+64;
    if(i%2!=0)printf("%d",i);
    else printf("%d",ch);}
    }
    
    return 0;
}