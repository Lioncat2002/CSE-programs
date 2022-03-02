#include "stdio.h"

int main(){
    int arr[200],n;//technically possible to dynamically allocate array sizex in gcc but not doing it:p

    printf("Enter the limit: \n");
    scanf("%d",&n);

    printf("Enter %d numbers\n",n);

    for (int i = 0; i < n; i++)
    {
        printf("element %d - ",i);
        scanf("%d",&arr[i]);
    }
    printf("Values stored in array: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d  ",arr[i]);
        
    }
    printf("\nReversed order: \n");
    for (int i = n-1; i >= 0; i--)
    {
        printf("%d  ",arr[i]);
        
    }

}