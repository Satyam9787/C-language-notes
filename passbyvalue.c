// #include<stdio.h>
// void swap( a,b){
// int temp=a;
// a=b;
// b=a;
// return ;
// }
// int main(){
//     int a;
//     printf("enter first num:");
//     scanf("%d",&a);
//      int b;
//     printf("enter seconed num:");
//     scanf("%d",&b);
//     swap(a,b);
//     printf("the first num is%d\n",a);
//     printf("the seconed num %d",b);
//     return 0;
// 
#include<stdio.h>
int main(){
int a=5;
int* x=&a;
printf ("%p \n",x);
}