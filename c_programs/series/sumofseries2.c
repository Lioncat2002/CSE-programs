//1+2+3+4...

#include "stdio.h"

int main(){
    int n,sum=0;
    printf("Enter Limit: ");
    scanf("%d",&n);
    int i;
    i=1;
    do
    {
        printf("%d ",i);
        sum+=i;
        i++;
    }while( i <= n );
    printf("\nSum: %d",sum);
    
}