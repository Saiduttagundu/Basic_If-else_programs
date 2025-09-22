#include<stdio.h>

void main()
{
    int threshold = 80, critical_temp = 100, temp;
    printf("Enter your Body Temp.:", temp);
    scanf("%d", &temp);

    if (temp <= threshold)
    {
        printf("Status: Normal");
    }
    else if (temp > threshold && temp <= critical_temp)
    {
        printf("Status: Warning");
    }
    else
    {
        printf("Status: Critical");
    }

}