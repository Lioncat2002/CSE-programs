//WAP to find the minimum and maximum values of an array
#include "stdio.h"

int main(){
    int min,max,a[10];
    for (int i = 0; i < 10; i++)
    {
        printf("a %d: ",i+1);
        scanf("%d",&a[i]);
    }
    min=a[0];
    max=a[0];
    for (int i = 0; i < 10; i++)
    {
        if (min>a[i])
        {
            min=a[i];
        }
        else if (max<a[i])
        {
            max=a[i];
        }
        
    }
    printf("Max: %d Min: %d",max,min);
}