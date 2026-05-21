
#include <stdio.h>
int main()
{
    int d;
    printf("enter a number");
    scanf("%d", &d);
    if (d % 5 == 0 && d % 3 == 0)
    {
        printf("divisible");
    }
    else
    {
        printf("not divisible");
    }
    return 0;
}