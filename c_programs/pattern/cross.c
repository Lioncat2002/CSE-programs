/*

*      *
 *    *
  *  *
   **
  *  *
 *    *
*      * 

*/
#include "stdio.h"

int main(){
    int i,j;
    for ( i = 1; i <= 4; i++)
    {
        for ( j = 1; j <=4; j++)
        {
            if (i==j)
            {
                printf("*");
            }else{
                printf(" ");
            }
            
        }
        for ( j = 4; j >=1; j--)
        {
            if (i==j)
            {
                printf("*");
            }else{
                printf(" ");
            }
            
        }
        
        printf("\n");
        
    }
    for ( i = 1; i <= 3; i++)
    {
        for ( j = 3; j >=0; j--)
        {
            if (i==j)
            {
                printf("*");
            }else{
                printf(" ");
            }
            
        }
        printf(" ");
        for ( j = 1; j <=4; j++)
        {
            if (i==j)
            {
                printf("*");
            }else{
                printf(" ");
            }
            
        }
        
        
        printf("\n");
        
    }
    
}