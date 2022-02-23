//WAP to check if a number is prime or not

#include "stdio.h"
#include "math.h"
int main(){
    int n,c;
    printf("Enter number: ");
    scanf("%d",&n);
    c=0;
    for (int i = 1; i <= sqrt(n); i++)
    {
        if(n%i==0){
            c++;
        }
    }
    if (c==1)
    {
       printf("Prime number");
    }
    else{
        printf("Not a prime number");
    }

}