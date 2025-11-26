#include <stdio.h>
int main(){
    char ch;
    printf("Enter alphabet: ");
    scanf("%c",&ch);

    if(ch>='a' && ch<='z')
        printf("Uppercase = %c", ch-32);
    else if(ch>='A' && ch<='Z')
        printf("Lowercase = %c", ch+32);
    else
        printf("Not an alphabet");
}
