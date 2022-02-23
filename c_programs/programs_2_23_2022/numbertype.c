//WAP to check if a number is +ve -ve or zero
#include "stdio.h"

int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    if (n>0)
    {
        printf("%d is +ve",n);
    }
    else if (n<0)
    {
        printf("%d is -ve",n);
    }
    else{
        printf("%d is zero",n);
    }
    
    
}