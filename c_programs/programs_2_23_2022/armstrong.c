//WAP to check if a number is armstrong or not

#include "stdio.h"

int main(){
    int n,k,d,sum;
    printf("Enter a number: ");
    scanf("%d",&n);
    k=n;
    while (n)
    {
        d=n%10;
        n=n/10;
        sum+=d*d*d;
    }
    if(sum==k){
        printf("Armstrong number");
    }
    else{
        printf("Not armstrong number");
    }
    
}