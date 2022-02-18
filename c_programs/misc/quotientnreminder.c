#include "stdio.h"

int main(){

    int dividend;
    int divisor;

    printf("Enter dividend: ");
    scanf("%d",&dividend);
    printf("Enter divisor: ");
    scanf("%d",&divisor);

    printf("Quotient: %d\n",dividend/divisor);
    printf("Reminder: %d",dividend%divisor);

}