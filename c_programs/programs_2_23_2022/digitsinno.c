//WAP to count the no. of digits in a number

#include "stdio.h"

int main(){

    int n,digits,d;
    printf("Enter the number: ");
    scanf("%d",&n);
    digits=0;

    while (n)
    {
        d=n%10;
        n=n/10;
        digits++;
    }
    printf("The amount of digits: %d",digits);
    
}