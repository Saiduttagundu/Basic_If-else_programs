#include <stdio.h>

void main() 
{
    int n;

    printf("Enter the no.:");
    scanf("%d",&n);

    if(n%5==0)
    {
        printf("Divisible by 5");
    }
        
    else
    {
        printf("Not divisible by 5");
    }
    
}
