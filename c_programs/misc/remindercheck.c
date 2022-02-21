#include "stdio.h"

int main(){
    char a=273;//chars hence they are 1 byte each and limited to 127 to -128 hence overflow occurs
    char b=25;
    int c=a%b;//output becomes 17
    printf("%d",c);
}