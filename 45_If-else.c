#include <stdio.h>
int main(){
    int age;
    printf("Enter age: ");
    scanf("%d",&age);

    if(age<0)
        printf("Invalid Age");
    else if(age>150)
        printf("Not possible");
    else
        printf("Valid Age");
}
