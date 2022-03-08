#include "stdio.h"
#include "string.h"
int main(){
    char s1[9]="This is ",s2[20]="VIT";
    strcat(s1,s2);
    puts(s1);
    puts(s2);
}