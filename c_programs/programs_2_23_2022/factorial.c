#include "stdio.h"

int main(){

    int n,f;
    printf("Enter the number: ");
    scanf("%d",&n);

    f=n;
    while (n>1)
    {
        f*=--n;
        
    }
    printf("factorial is %d",f);
    
}