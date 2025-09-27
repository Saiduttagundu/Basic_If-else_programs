#include<stdio.h>

void main()
{
    int age, eligibility=18;
    char name[20];

    printf("What is your name:");
    scanf("%s", &name);

    printf("What is your Age:");
    scanf("%d", &age);

    if (age > eligibility)
    {
        printf("Congratulations!! \n%s you are Eligible for Voting.", name);
    }
    else
    {
        printf("Sorry %s your age is below 18. \nYou are not Eligible for Voting.", name);
    }
}