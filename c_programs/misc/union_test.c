#include "stdio.h"

union lion{
    int n;
    double pussy;
};


int main(){
    union lion c;
    c.n=2;
    c.pussy=23.0;
    printf("%ld\n",sizeof(c));
}
