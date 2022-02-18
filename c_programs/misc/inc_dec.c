#include "stdio.h"

int main(int argc, char const *argv[])
{
    int a,b;
    a=5;
    b=++a;
    b=a++;
    printf("%d %d",a,b);
    return 0;
}
