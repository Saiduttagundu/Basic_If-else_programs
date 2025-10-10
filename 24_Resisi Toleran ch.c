#include <stdio.h>

void main() 
{
    float r,actual;
    
    printf("Enter value:");
    scanf("%f%f",&r,&actual);

    if(actual>=r*0.95 && actual<=r*1.05)
    {
        printf("Within tolerance");
    }
    else
    {
        printf("Out of tolerance");
    }
    return 0;
}
