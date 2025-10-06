#include <stdio.h>

void main() 
{
    int a, b;
    char op;
    
    printf("Enter the Operator to use (only +/-):");
    scanf("%c", &op);

    printf("Enter the 1st no.:");
    scanf("%d", &a);

    printf("Enter the Operator to use:");
    scanf("%d", &b);

    if(op == '+')
    {
        printf("Sum = %d",a+b);
    }
        
    else if(op == '-')
    {
        printf("Difference = %d",a-b);
    }
    else
    {
        printf("Invalid Operator");
    }
    
}
