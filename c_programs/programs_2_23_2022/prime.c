//WAP to check if a number is prime or not

#include "stdio.h"
#include "math.h"
int main(){
    int n,c,i;
    scanf("%d",&n);
    c=0;
    for (i = 1; i <= sqrt(n); i++)
    {
        if(n%i==0){
            c++;
        }
    }
    if (c==1)
    {
       printf("prime");
    }
    else{
        printf("not prime");
    }

}