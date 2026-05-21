#include<stdio.h>
void incrising(int n){
        if (n==0) return;
            printf("%d\n",n);
        incrising(n-1);
    printf("%d\n",n);
    
    return;
}
int main(){ 
    int n;
    printf("enter a num");
    scanf("%d",&n);
    incrising(n);
    return 0;
}