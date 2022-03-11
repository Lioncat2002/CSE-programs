#include "stdio.h"

int main(){
    char s1[200],s2[200];
    scanf("%s",s1);
    scanf("%s",s2);
    int len;
    for (len = 0; s1[len] !='\0'; len++);
    for (int i = 0; s2[i] !='\0'; i++,len++)
    {
        s1[len]=s2[i];
    }
    s1[len]='\0';
    printf("%s",s1);
}