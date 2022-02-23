#include "stdio.h"

int main(){

    int x=10;
    char y='a';

    x=x+y;
    double z;
    z=x+1.0f;
    printf("%d %lf\n",x,z);
    int c=(int)z;
    printf("%d",c);
}