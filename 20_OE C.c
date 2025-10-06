#include <stdio.h>

void main() 
{
    int digit;

    printf("Enter the no.");
    scanf("%d",&digit);

    if(digit % 2 == 0)
    {
        printf("Even Digit");
    }
    else
    {
        printf("Odd Digit");
    }
    
}
