#include "stdio.h"

int main(){
    printf("Capital letters: \n");
    for(char i='A';i<='Z';i++){
        printf("%c\n",i);
        printf("%d\n",i);
    }
    printf("Small letters: \n");
    for(char i='a';i<='z';i++){
        printf("%c\n",i);
        printf("%d\n",i);
    }
    return 0;
}