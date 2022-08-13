#include <stdio.h>

void reverse(int *num,int *rev){
    int d=*num;
    *num=*num/10;
    *rev=*rev*10+d;
}


int main(){
    int number;
    int r=0;
    scanf("%d",&number);
    int k=number;
    int *nptr=&number;
    while(*nptr){

    int d=*nptr%10;
    *nptr=*nptr/10;
    r=r*10+d;
    //    printf("%d\n",r);
    }
    if(r==k){
        printf("\nPalindrome \n");
        return 0;
    }
    printf("\nNot a palindrome\n");
}
