#include "stdio.h"

int main(){
    float marks;
    scanf("%f",&marks);

    if (marks>=90)
    {
        printf("A");
    }
    else if(marks>=81 && marks<90)
    {
        printf("B");
    }
    else if(marks>=71 && marks<=80)
    {
        printf("C");
    }
    else if(marks>=50 && marks<=70)
    {
        printf("D");
    }
    else{
        printf("F");
    }
    
}