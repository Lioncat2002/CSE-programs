//WAP to find the sum of natural numbers upto a limit
#include "stdio.h"

int main(){
    int limit;
    int sum;
    printf("Enter the limit: ");
    scanf("%d",&limit);
    sum=0;

    for (int i = 1; i <= limit; i++)
    {
        sum+=i;
    }
    printf("sum: %d",sum);
    
}