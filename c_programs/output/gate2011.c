#include "stdio.h"

int main(){
    char c[]="GATE2011";
    char *p=c;
    printf("%s",p+p[3]-p[1]);
    /*
        This is known as pointer arithmetic
        p is the pointer of the string, 
        p[3] is E which is 70 in ascii
        p[1] is A which is 65 in ascii

        p[3]-p[1]=70-65=5
        Hence,
        p+p[3]-p[1] becomes p + 5 which is the 2 in GATE2011

        Hence, 
        Output will be 2011
    */
}