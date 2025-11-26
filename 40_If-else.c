#include <stdio.h>
int main(){
    int n;
    printf("Enter number: ");
    scanf("%d",&n);

    if(n%3==0 && n%5==0)
        printf("Divisible by BOTH 3 and 5");
    else if(n%3==0)
        printf("Divisible only by 3");
    else if(n%5==0)
        printf("Divisible only by 5");
    else
        printf("Not divisible by 3 or 5");
}
