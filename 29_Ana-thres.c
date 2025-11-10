#include <stdio.h>

int main() 
{
    int value;

    scanf("%d",&value);

    if(value>512) printf("High signal");

    else printf("Low signal");
    
    return 0;
}
