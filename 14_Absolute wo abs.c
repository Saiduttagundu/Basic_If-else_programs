#include <stdio.h>

void main() 
{
    int a, b, diff;

    printf("Enter 1st no.:");
    scanf("%d", &a);

    printf("Enter 2nd no.:");
    scanf("%d", &b);

    if(a > b)
    {
        diff = a - b;
    }
    else
    {
        diff = b - a;
    }

    printf("Difference = %d", diff);

}
