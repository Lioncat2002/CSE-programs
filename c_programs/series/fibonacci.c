/*
1 1 2 5 ... n
*/

#include "stdio.h"

int main(){

    int n;
    printf("Enter the limit: ");
    scanf("%d",&n);
    int a=1;
    int b=1;
    printf("%d %d",a,b);
    for(int i=1;i<=n-2;i++){

        int c=a+b;
        a=b;
        b=c;
        printf(" %d",c);
    }
}