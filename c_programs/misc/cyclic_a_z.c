#include "stdio.h"

int main(){
    char a,b;
    scanf("%c %c",&a,&b);
    if (a<=b)
    {
        for (char i = a; i <= b; i++)
        {
            printf("%c ",i);
        }
    }
    else if (a>b)
    {
        for (char i = a; i <= 'Z'; i++)
        {
            printf("%c ",i);
        }
        for (char i = 'A'; i <= b; i++)
        {
            printf("%c ",i);
        }        
    }
    
    
}