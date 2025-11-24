#include <stdio.h>
int main(){
    int y;
    printf("Enter year: ");
    scanf("%d",&y);

    if(y%100==0){
        if(y%400==0)
            printf("Century Leap Year");
        else
            printf("Century but NOT Leap Year");
    }else{
        printf("Not a century year");
    }
}
