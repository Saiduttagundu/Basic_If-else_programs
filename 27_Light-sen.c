#include <stdio.h>

int main() 
{
    int lux;
    scanf("%d",&lux);

    if(lux<100) printf("Dark");

    else if(lux<1000) printf("Normal light");

    else printf("Bright");
    
    return 0;
}
