/*
WAP to find the area of a circle
*/
#include "stdio.h"
#define PI 3.14

int main(int argc, char const *argv[])
{
    float radius,area;
    printf("Enter the radius: \n");
    scanf("%f",&radius);

    area=PI*radius*radius;
    printf("Area of the circle is: %.2f",area);
    return 0;
}
