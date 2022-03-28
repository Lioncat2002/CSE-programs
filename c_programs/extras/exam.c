//WAP to find if a student passed failed or needs to reappear
//if >=55% in A and >=45% in B pass
//if >=45% in A and >=55% in B pass
//if <45% in B and >=65% in A reappear for B
//else fail

#include "stdio.h"

int main(){
    int a,b;
    printf("Enter A and B marks: ");
    scanf("%d %d",&a,&b);
    if ((a>=55 && b>=45)||(b>=55 && a>=45))
    {
        printf("PASS");
    }
    else if(a>=65 && b<45){
        printf("REAPPEAR IN EXAM B");
    }
    else{
        printf("FAIL");
    }
    
}