#include "stdio.h"

int main(){
    int arr[200],n;//technically possible to dynamically allocate array size in gcc but not doing it:p
    
    printf("Enter the limit: \n");
    scanf("%d",&n);

    printf("Enter %d numbers\n",n);

    for (int i = 0; i < n; i++)
    {
        printf("element %d - ",i);
        scanf("%d",&arr[i]);
       
    }
    for (int i = 0; i < n-1; i++)
    {
        if (arr[i]>arr[i+1])
        {
            int temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
            i=-1;
        }

        
    }    
    printf("Sorted elements: ");
    for (int i = 0; i < n; i++)
    {
        printf(" %d ",arr[i]);
    }
}