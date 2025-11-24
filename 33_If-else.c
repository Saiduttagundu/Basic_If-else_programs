#include <stdio.h>
int main(){
    int a,b,c,d;
    printf("Enter 4 numbers: ");
    scanf("%d%d%d%d",&a,&b,&c,&d);

    if(a>b && a>c && a>d) printf("A is greatest");
    else if(b>c && b>d)   printf("B is greatest");
    else if(c>d)          printf("C is greatest");
    else                  printf("D is greatest");
}
