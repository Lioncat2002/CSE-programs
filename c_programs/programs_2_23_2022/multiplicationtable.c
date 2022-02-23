//WAP to generate a multiplication table
#include "stdio.h"

int main(){

    int n;
    printf("Enter the limit:");
    scanf("%d",&n);

    for (int i=1;i<=n;i++){
        printf("%d x %d = %d \n",n,i,n*i);
    }

}