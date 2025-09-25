#include<stdio.h>

void main()
{
    int a, b;

    printf("Enter First no.:");
    scanf("%d", &a);
    printf("Enter Second no.:");
    scanf("%d", &b);

    if (a < b)
    {
        printf("The Greater no. is: %d", b);
    }
    else if (a > b)
    {
        printf("The Greater no. is: %d", a);
    }
    else
    {
        printf("The given no. are equal.");
    }
}