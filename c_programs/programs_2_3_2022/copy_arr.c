#include "stdio.h"

int main(){
    int arr[200],arr1[200],n;//technically possible to dynamically allocate array size in gcc but not doing it:p
    
    printf("Enter the limit: \n");
    scanf("%d",&n);

    printf("Enter %d numbers\n",n);

    for (int i = 0; i < n; i++)
    {
        printf("element %d - ",i);
        scanf("%d",&arr[i]);
        arr1[i]=arr[i];
    }
    printf("Values stored in array 1: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d  ",arr[i]);
        
    }
    printf("\nValues stored in array 2: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d  ",arr1[i]);
        
    }
}