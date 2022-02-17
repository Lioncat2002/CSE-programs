/*
Find the average of 4 subjects
*/
#include "stdio.h"

int main(){
    float s1,s2,s3,s4;
    float avg;
    printf("Enter the subjects: \n");
    scanf("%f %f %f %f",&s1,&s2,&s3,&s4);
    
    avg=(s1+s2+s3+s4)/4;
    printf("Average is %.2f",avg);
    return 0;
}