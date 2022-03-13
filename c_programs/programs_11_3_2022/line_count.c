#include "stdio.h"
#include "string.h"
int main(){

    char s[200];
    int lines=0;
    int words=0;
    printf("Enter a few lines: ");
    scanf("%[^;]s",s);
    int char_cnt=0;
  
    for (int i = 0; s[i]!='\0'; i++)
    {
       
        switch (s[i])
        {
        case '\n':
        
        lines++;       
        case ' ':   
            words++;
            break;

        
        default:
        if ((s[i]>='A'&& s[i]<='Z')||(s[i]>='a'&& s[i]<='z')||(s[i]>='0'&& s[i]<='9'))
        {
            char_cnt++;
        }
        }
        
    }
    
    printf("Lines: %d\n",lines);
    printf("Words: %d\n",words);
    printf("Char count: %d",char_cnt);
}