//WAP to check if a number is palindrome or not

#include "stdio.h"

int main(){
    int n,k,d,rev;
    printf("Enter the number: ");
    scanf("%d",&n);
    k=n;
    rev=0;
    while (n)
    {
        d=n%10;
        n=n/10;
        rev=rev*10+d;
    }
    if(rev==k){
        printf("%d is Palindrome",k);
    }
    else{
        printf("%d is not Palindrome",k);
    }
    
}