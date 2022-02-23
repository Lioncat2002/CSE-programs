//WAP to check if a number is prime or not in between two limits

#include "stdio.h"
#include "math.h"
int main(){
    int a,b,c;
    printf("Enter limits: ");
    scanf("%d %d",&a,&b);
    c=0;
    for (int j = a; j <=b; j++)
    {
    for (int i = 1; i <= sqrt(j); i++)
    {
        if(j%i==0){
            c++;
        }
    }
    if (c==1)
    {
       printf("%d is Prime number\n",j);
    }
    c=0;
    }
    
    

}