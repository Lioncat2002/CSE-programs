#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    int speed;
    char *category=malloc(200);
    scanf("%d",&speed);
    if (speed>=74 && speed<=95) {
        strcpy(category, "I");
    }

    if (speed>=96 && speed<=110) {
        strcpy(category, "II");
    }

    if (speed>=111 && speed<=130) {
        strcpy(category, "III");
    }
    if (speed>=131 && speed<=155) {
        strcpy(category, "IV");
    }
    if (speed>155) {
        strcpy(category, "V");
    }
    printf("%s",category);
}
