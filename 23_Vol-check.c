#include <stdio.h>

void main() 
{
    float v;

    printf("Enter the Voltage:");
    scanf("%f",&v);

    if(v<5) 
    {
        printf("Low voltage");
    }
    else if(v<=12) 
    {
        printf("Medium voltage");
    }
    else 
    {
        printf("High voltage");
    }
    return 0;
}
