#include <stdio.h>

void main() 
{
    int amount;

    printf("Enter the Billing price:");
    scanf("%d", &amount);

    if (amount >= 1000)
    {
        printf("Discount = %d", amount*10/100);
    }
        
    else
    {
        printf("No Discount");
    }

}
