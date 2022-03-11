#include "stdio.h"

int main(){
    int a[200],even[200],odd[200],n;
    int even_count=0;
    int odd_count=0;
    int even_product=1;
    int odd_sum=0;
    printf("Enter the limit: \n");
    scanf("%d",&n);


    for (int i = 0; i < n; i++)
    {
        printf("element %d - ",i);
        scanf("%d",&a[i]); 
    
        if (a[i]%2==0)
        {
            even[even_count]=a[i];
            even_count++;
        }
        else{
            odd[odd_count]=a[i];
            odd_count++;
        }    
    }
    printf("Even numbers are: \n");
    if (even_count>0)
    {
        for (int i = 0; i < even_count; i++)
        {
        even_product*=even[i];
        }
    }
    if (odd_count>0)
    {
       printf("\nOdd numbers are: \n");
        for (int i = 0; i < odd_count; i++)
        {
            odd_sum+=odd[i];
        }  
    }
    
    
     printf("Even product: %d \n",even_product);
     printf("Odd sum: %d \n",odd_sum);
}