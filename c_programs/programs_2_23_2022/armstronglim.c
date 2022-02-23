//WAP to check if a number within a range is armstrong or not

#include "stdio.h"

int main(){
    int a,b,k,d,sum;
    printf("Enter a number: ");
    scanf("%d %d",&a,&b);
    for (int i = a; i <= b; i++)
    {
    k=i;
    sum=0;
    while (k)
    {
        d=k%10;
        k=k/10;
        sum+=d*d*d;
    }
    
    if(sum==i){
        printf("%d is Armstrong number\n",i);
    }
    
    }
    
    
    
}