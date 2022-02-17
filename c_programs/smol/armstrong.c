/**
 * @file armstrong.c
 * @brief Check if a number is Armstrong or not.
 * Eg: 153 is an armstrong number
 */
#include "stdio.h"

int main(){
    int n,k,d,sum=0;
    printf("Enter the number: ");
    scanf("%d",&n);
    k=n;
    while(n){
        d=n%10;
        n=n/10;
        sum+=d*d*d;
    }
    if (sum==k)
    {
        printf("%d is an Armstrong Number",k);
    }
    else{
        printf("%d is not an Armstrong Number",k);
    }
    
}