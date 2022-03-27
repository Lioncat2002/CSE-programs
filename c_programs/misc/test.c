#include "stdio.h"

int main(){
    char s[200];
    printf("Enter a string: ");
    fgets(s,200,stdin);
    printf(s);
    char *p=s;
    for (int i = 0; *(p+i) !='\0'; i++)
    {
        
        if (*(p+i)=='A'||*(p+i)=='E'||*(p+i)=='I'||*(p+i)=='O'||*(p+i)=='U')
        {
            *(p+i)=*(p+i)+1;
            
        }
    }
    printf(s);
    
}