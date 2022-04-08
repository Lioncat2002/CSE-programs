#include "stdio.h"

int main(){
    char c='A';
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);

    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j <=i; j++)
        {
            printf("%c",c);
            
        }
        c++;
        for (int j = 1; j <=i; j++)
        {
            printf("%c",c);
         }
        printf("\n");
        
    }
    
}