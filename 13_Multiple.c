#include <stdio.h>

void main() 
{
    int a,b;

    printf("Enter a no.:");
    scanf("%d", &a);

    printf("Enter another no.:");
    scanf("%d", &b);

    if(a % b == 0)
    {
        printf("%d is a multiple of %d", a,b);
    }
    else
    {
        printf("%d is not a multiple of %d", a,b);
    }
    
}
