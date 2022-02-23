//WAP to print the grade according to the marks

#include "stdio.h"

int main(){
    float marks;
    printf("Enter marks: ");
    scanf("%f",&marks);

    if(marks>90){
        printf("Grade is A");
    }
    else if(marks>80 && marks<=90){
        printf("Grade is B");
    }
    else if(marks>70 && marks<=80){
        printf("Grade is C");
    }
    else if(marks>50 && marks<=70){
        printf("Grade is D");
    }
    else{
        printf("Grade is F");
    }
}