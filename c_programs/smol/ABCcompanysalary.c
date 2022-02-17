/**
 * file ABCcompanysalary.c
 * brief ABC company is interested to computerize the salary payments of
          their employees
          DA: 80% Basic pay
          HRA: 30% Basic Pay
          PF: 12% of Basic Pay
          Input: Basic Pay
          Process: Salary=DA+HRA+Basic Pay-PF
          Output: Salary
 */

#include "stdio.h"

int main(){

    float basicpay,salary;

    printf("Enter basic pay: \n");
    scanf("%f",&basicpay);
    salary=basicpay+basicpay*0.80+basicpay*0.30-basicpay*0.12;
    printf("Net salary: %f",salary);
}