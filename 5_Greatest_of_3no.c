#include<stdio.h>

void main()
{
    int A, B, C;

    printf("Enter 1st No.:");
    scanf("%d", &A);
    printf("Enter 2nd No.:");
    scanf("%d", &B);
    printf("Enter 3rd No.:");
    scanf("%d", &C);

    if (A > B && A > C)
    {
        printf("The Greatest amongst given no. is: %d", A);
    }
    else if (B > C)
    {
        printf("The Greatest amongst given no. is: %d", B);
    }
    else if (C > B && C > A)
    {
        printf("The Greatest amongst given no. is: %d", C);
    }
    else
    {
        printf("All the no. are equal.");
    }
}