#include<stdio.h>

void main()
{
    int saving = 5000, withdraw, balance;

    printf("How much amount to withdraw:");
    scanf("%d", &withdraw);

    balance = saving - withdraw;

    if (withdraw <= saving)
    {
        printf("Transaction Successfull. Remaining amount:%d", balance);
    }
    else
    {
        printf("Insufficient Balance!!!");
    }

}