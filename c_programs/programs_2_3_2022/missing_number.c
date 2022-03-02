#include "stdio.h"

int main(){
    int arr[200],n;//technically possible to dynamically allocate array size in gcc but not doing it:p
    int dict[200]={0};
    
    printf("Enter the limit: \n");
    scanf("%d",&n);

    printf("Enter %d numbers\n",n);

    for (int i = 0; i < n; i++)
    {
        printf("element %d - ",i);
        scanf("%d",&arr[i]);
        dict[arr[i]]++; //bumping values in a "dictionary"
        
    }
    int max=arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i]>max)
        {
           max=arr[i];
        } 
    }
    printf("Number of elements with odd occurence: ");
    for (int i = 1; i < max; i++)
    {
        
        if(dict[i]==0){
           printf("%d ",i);
        }
    }
    
}