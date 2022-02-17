#include "stdio.h"

int main(int argc, char const *argv[])
{
    int a;
    char b;
    float c;
    long d;
    double e;
    short f;
    printf("Sizeof int: %d \n",sizeof(a));
    printf("Sizeof char: %d\n",sizeof(b));
    printf("Sizeof float: %d\n",sizeof(c));
    printf("Sizeof long: %d\n",sizeof(d));
    printf("Sizeof double: %d\n",sizeof(e));
    printf("Sizeof short: %d\n",sizeof(f));
    return 0;
}
