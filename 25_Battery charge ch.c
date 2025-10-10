#include <stdio.h>

void main() 
{
    int percent;

    printf("Enter value:");
    scanf("%d",&percent);

    if(percent>=80) 
    {
        printf("Battery Full");
    }
    else if(percent>=30) 
    {
        printf("Battery Medium");
    }
    else 
    {
        printf("Low Battery");
    }
    return 0;
}
