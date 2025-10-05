#include<stdio.h>

void main()
{
    int temp;

    printf("Enter the Temp.:");
    scanf("%d", &temp);

    if (temp < 0)
    {
        printf("Freezing Cold");
    }
    else if (temp >0 && temp < 15)
    {
        printf("Cold");
    }
    else if (temp >15 && temp < 40)
    {
        printf("Normal");
    }
    else if(temp >40 && temp < 52)
    {
        printf("Warm");
    }
    else
    {
        printf("Too Hot to Handle.");
    }
}