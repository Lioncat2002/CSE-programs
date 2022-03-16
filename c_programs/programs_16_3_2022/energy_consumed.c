#include "stdio.h"

int compute(int units){
    int cost;
    if (units>=0 && units<=100)
    {
        cost=50+units;
    }
    else if (units>=101 && units<=200)
    {
        cost=100+100*2+(units-100)*3;
    }
    else if (units>=201 && units<=500)
    {
        cost=200+100*3+100*4+(units-200)*5;
    }
    return cost;
}

int main(){
    int units;
    int cost=0;
    scanf("%d",&units);
    cost=compute(units);
    printf("%d",cost);
}