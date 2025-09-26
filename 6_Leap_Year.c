#include<stdio.h>

void main()
{
    int year;

    printf("Enter a year:");
    scanf("%d", &year);

    if (year % 4 == 0)
    {
        printf("The Year %d is a Leap year.", year);
    }
    else
    {
        printf("%d is not a Leap year.", year);
    }
}