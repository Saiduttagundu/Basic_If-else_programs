#include<stdio.h>

void main()
{
    int num;

    printf("Type any No.:");
    scanf("%d", &num);

    if (num > 0)
    {
        printf("Positive");
    }
    else if (num < 0)
    {
        printf("Negative");
    }
    else
    {
        printf("Zero");
    }
}