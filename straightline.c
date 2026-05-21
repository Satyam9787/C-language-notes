// #include<stdio.h>
// int main(){
//     int n;
//     printf("enter the maeks");
//     scanf("%d",n);
//     if(n>80){
//     printf("a grde");}
//     // else if(n<60){
//     // printf("b grade");}
//     // else if("n>40"){
//     // printf("c grade");}
//     else{
//         printf("d grdae");
//     }
#include <stdio.h>
int main()
{
    int x1, y1, x2, y2, x3, y3, m1, m2;
    printf("enter ");
    scanf("%d%d%d%d%d%d", &x1, &y1, &x2, &y2, &x3, &y3);
    m1 = (y2 - y1) / (x2 - x1);
    printf("\n m1=%d ", m1);
    m2 = (y3 - y2) / (x3 - x2);
    printf("\nm2=%d", m2);
    if (m1 = m2)
    {
        printf("\nthe straight");
    }
    if (m1 != m2)
    {
        printf("not straight");
    }
    return 0;
}
