#include <stdio.h>
int main()
{
    int a, b, c;
    printf("enter tri data value");
    scanf("%d%d%d", &a, &b, &c);

    if (a + b > c && b + c > a && c + a > b)
    {
        printf("valied triangle");
    }
    else
    {
        printf("not valied triangle");
    }
}