#include "stdio.h"

int main(){
    int arr[200],n;
    //printf("Enter the limit: \n");
    scanf("%d",&n);

    //printf("Enter %d numbers\n",n);

    for (int i = 0; i < n; i++)
    {
        //printf("element %d - ",i);
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
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    for (int i = 0; i < n-1; i++)
    {
        if (arr[i]<arr[i+1])
        {
            int temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
            i=-1;
        }

        
    }    
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
}