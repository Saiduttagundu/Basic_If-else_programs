#include<stdio.h>

void main()
{
    int a, b;

    printf("Enter 1st no.:");
    scanf("%d", &a);

    printf("Enter 2nd no.:");
    scanf("%d", &b);

    if(a < b)
    {
        printf("%d is smaller", a);
    }
    else
    {
        printf("%d is smaller", b);
    }
}