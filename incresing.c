#include<stdio.h>
void incrising(int x ,int n){
        if (x>n) return ;
        printf("%d",x);
        incrising(x+1,n);

    
    return;
}
int main(){ 
    int n;
    printf("enter a num");
    scanf("%d",&n);
    incrising(1,n);
    return 0;
}