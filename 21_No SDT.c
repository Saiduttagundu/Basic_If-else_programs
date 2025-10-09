#include <stdio.h>

int main() 
{
    int n;

    printf("Which no. to check:");
    scanf("%d", &n);

    if(n >= 0 && n <= 9)
    {
        printf("Single Digit");
    }
    else if(n >= 10 && n <= 99)
    {
        printf("Double Digit");
    }
    else if(n >= 100 && n <= 999)
    {
        printf("Triple Digit");
    }
    else
    {
        printf("More than 3 digits");
    }
    return 0;
}
