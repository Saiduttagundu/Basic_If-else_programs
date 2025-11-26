#include <stdio.h>
int main(){
    int t;
    printf("Enter temperature: ");
    scanf("%d",&t);

    if(t<10) printf("Cold");
    else if(t<25) printf("Moderate");
    else if(t<40) printf("Hot");
    else printf("Very Hot");
}
