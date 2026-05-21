#include <stdio.h>
int main()
{
    int cp, sp, Loss, profit;
    printf("enter the value");
    scanf("%d%d", &cp, &sp);
    if (sp > cp)
    {
        printf("profit");
        profit = sp - cp;
        printf("\nprofit=%d", profit);
    }

    else
    {
        printf("loss");
        Loss = cp - sp;
        printf("\nloss=%d", Loss);
    }
    return 0;
}
