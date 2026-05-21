#include<stdio.h>
int add( int x,int y){
    return x+y;
}
int main(){
    int a,b;
    printf("enter two data values: ");
    scanf("%d %d",&a,&b);
    int sum = add(a,b);//called for function
    printf("the sum is =%d" ,sum);
    return 0;
}