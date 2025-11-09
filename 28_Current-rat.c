#include <stdio.h>

int main() 
{
    float current;

    scanf("%f",&current);

    if(current<=5) printf("Safe current");

    else printf("Overcurrent warning");
    
    return 0;

}
