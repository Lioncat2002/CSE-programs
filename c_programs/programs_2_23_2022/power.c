//WAP to find the power of a number
#include "stdio.h"
#include "math.h"
int main(){

    double a,b,power;
    printf("Enter number and power: ");
    scanf("%lf %lf",&a,&b);
    power=pow(a,b);
    printf("Power: %.2lf",power);
}