#include <stdio.h>

int main() 
{
    float temp;

    printf("What is the temp.:");
    scanf("%f",&temp);
    
    if(temp<0) 
    {
        printf("Sensor Cold");
    }
    else if(temp>100) 
    {
        printf("Overheat!");
    }
    else 
    {
        printf("Normal Range");
    }
    return 0;
}
