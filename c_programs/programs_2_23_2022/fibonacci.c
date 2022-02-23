//WAP to print the fibonacci series

#include "stdio.h"

int main(){
    int limit,a,b,c;
    printf("Enter limit: ");
    scanf("%d",&limit);
    a=1;
    b=1;
    c=0;
    printf("%d %d",a,b);
    for (int i = 2; i < limit; i++)
    {
        c=a+b;
        a=b;
        b=c;
        printf(" %d",c);
    }
    
}