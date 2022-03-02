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
    
    printf("Number of duplicate elements: ");
    for (int i = 0; i < 200; i++)
    {
        
        if(dict[i]>=1){
           printf("%d ",i);
        }
    }
    
}