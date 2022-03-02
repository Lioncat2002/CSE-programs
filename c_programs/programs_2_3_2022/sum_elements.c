#include "stdio.h"

int main(){
    int arr[200],n,sum;//technically possible to dynamically allocate array size in gcc but not doing it:p
    sum=0;
    printf("Enter the limit: \n");
    scanf("%d",&n);

    printf("Enter %d numbers\n",n);

    for (int i = 0; i < n; i++)
    {
        printf("element %d - ",i);
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    
    printf("Sum of all elements: %d",sum);
}