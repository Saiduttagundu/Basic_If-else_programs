#include <stdio.h>
int main(){
    int amount;
    printf("Enter withdrawal amount: ");
    scanf("%d",&amount);

    if(amount % 100 != 0)
        printf("Amount must be multiple of 100");
    else if(amount > 20000)
        printf("Maximum limit is 20000");
    else
        printf("Withdraw Successful");
}
