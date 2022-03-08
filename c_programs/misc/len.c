#include "stdio.h"

int main(){
    char ch[20]="";
    int i;
    for (i = 1; ch[i] !='\0'; ++i);
    
    printf("%d",i);
    
}