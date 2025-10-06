#include <stdio.h>

void main() 
{
    int age;

    printf("Enter the Age to check:");
    scanf("%d", &age);

    if (age < 12)
    {
        printf("Child");
    }
    else if (age >= 12 && age <= 21)
    {
        printf("Teenager");
    }
    else if (age > 21 && age <= 50)
    {
        printf("Adult");
    }
    else
    {
        printf("Senior Citizen");
    }
}
