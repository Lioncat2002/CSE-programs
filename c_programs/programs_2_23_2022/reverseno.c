//WAP to reverse a number

#include "stdio.h"

int main(){

    int n,digits,d,rev;
    printf("Enter the number: ");
    scanf("%d",&n);
    rev=0;
    while (n)
    {
        d=n%10;
        n=n/10;
        digits++;
        rev=rev*10+d;
    }
    printf("Reversed number: %d",rev);
    
}