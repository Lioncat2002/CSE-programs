#include "stdio.h"

int main(){
    int c[]={1,1,2,3,4,5,6,6,6,7,8,8};
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);

    for (int i = 0; i < 11; i++)
    {
        for (int j = i+1; j < 12; j++)
        {
            if (c[i]==c[j])
            {
                c[j]=n;
            }
            
        }
    }
    for (int i = 0; i < 12; i++)
    {
        printf("%d",c[i]);
    }
    
    
}