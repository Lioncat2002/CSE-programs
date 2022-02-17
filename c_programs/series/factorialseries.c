/*
WAP to print factorial series
1   1
3   6
5   120
*/
#include "stdio.h"

int main(){
    int fact=1,start;
    int limit;

    printf("Enter a limit: \n");
    scanf("%d",&limit);  
    if(limit%2==0){
        start=2;
    }
    else{
        start=1;
    }
    
    for (int i = start; i <= limit; i+=2)
    {
        //finding the factorial of each number till the limit
        int alt=i;
        fact=alt;
        while(alt>1){
            alt-=1;
            fact*=alt;
        }
        printf("%d %d \n",i,fact);
    }
    
}