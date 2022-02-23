//WAP to check if a character is alphabet or not
#include "stdio.h"

int main(){
    char n;
    printf("Enter a character: ");
    scanf("%c",&n);

    if ((n>='A' && n<='Z')||(n>='a' && n<='z'))
    {
        printf("%c is a alphabet",n);
    }
    else{
        printf("%c is not a alphabet",n);
    }
    
}