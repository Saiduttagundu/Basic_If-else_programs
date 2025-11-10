#include <stdio.h>

int main() 
{
    int sensor;

    scanf("%d",&sensor);

    if(sensor>50) printf("LED ON");

    else printf("LED OFF");
    
    return 0;
}
