#include <stdio.h>
int main(){
    int marks;
    printf("Enter marks out of 100: ");
    scanf("%d",&marks);

    if(marks>=35)
        printf("Pass");
    else if(marks>=30 && marks<35)
        printf("Pass with Grace Marks");
    else
        printf("Fail");
}
