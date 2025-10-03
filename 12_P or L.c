#include<stdio.h>

void main()
{
    int cp, sp;

    printf("Enter the Cost price:");
    scanf("%d", &cp);

    printf("Enter the Selling price:");
    scanf("%d", &sp);

    if(sp > cp)
    {
        printf("Profit = %d", sp-cp);
    }
    else if(cp > sp)
    {
        printf("Loss = %d", cp-sp);
    }
    else
    {
        printf("No Profit & No Loss.");
    }
}