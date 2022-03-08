#include "stdio.h"

int main(){
    int arr[200][2],n;
    n=4;
    for (int i = 0; i < n; i++)
    {
        if(scanf("%d",&arr[i][0])==1){
            arr[i][1]=4-i;
        }
        else{
            printf("Invalid Number Entered");
            return 0;
        }
        
       
    }
    for (int i = 0; i < n-1; i++)
    {
        if (arr[i][0]>arr[i+1][0])
        {
            int temp=arr[i][0];
            arr[i][0]=arr[i+1][0];
            arr[i+1][0]=temp;

            temp=arr[i][1];
            arr[i][1]=arr[i+1][1];
            arr[i+1][1]=temp;
            i=-1;
        }

        
    }    
        printf("Second largest number = %d\n", arr[n-2][0]);
    printf("Original Entry position from Last = %d\n",arr[n-2][1]);

}