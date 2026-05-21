#include<stdio.h>
int  fun(int* a){
*a=7;
return 2;
}

int main(){
    int a=4;
    printf("%d\n",a);
    fun(&a);
        printf("%d\n",a);
    return 0;
}