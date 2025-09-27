#include <stdio.h>

void main() 
{
 
    int marks;

    printf("Enter marks out of 100:");
    scanf("%d",&marks);

    if(marks >= 40) 
    {
        printf("Pass");
    }

    else 
    {
        printf("Fail");
    }
    
    return 0;
}
