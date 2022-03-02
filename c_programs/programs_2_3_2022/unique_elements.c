#include "stdio.h"

int main(){
    int arr[200],n,i,j;//technically possible to dynamically allocate array size in gcc but not doing it:p
    
    printf("Enter the limit: \n");
    scanf("%d",&n);

    printf("Enter %d numbers\n",n);

    for (int i = 0; i < n; i++)
    {
        printf("element %d - ",i);
        scanf("%d",&arr[i]);
    }
    printf("unique element: ");
    for ( i = 0; i < n; i++)
    {

    for ( j = 0; j < n; j++)
    {
        if (arr[i]==arr[j] &&i!=j)
        {
            break;
        }
        
    }
    if (j==n)//print only if j reaches the end of the loop and not on break
    {
        printf("%d ",arr[i]);
    }
    

    }
    
}