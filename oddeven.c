#include<stdio.h>
int main(){
    int a ;
    printf ("enter a :");
    scanf("%d",&a);
    if(a%2==0){
    printf("even number");
    }
    else{
        printf("odd number ");
    }
    return 0;
}
// #include <stdio.h>
// int main()
// {
//     int l, b, area, perim;
//     printf("enter two data value\n");
//     scanf("%d%d", &l, &b);
//     area = l * b;
//     printf("the area is :%d", area);
//     perim = 2 * (l + b);
//     printf("\nthe perimeter is:%d", perim);
//     if (perim > area)
//     {
//         printf("\nthe perimeter is big");
//     }
//     else
//     {
//         printf("\nthe area is big");
//     }
//     return 0;
// }
