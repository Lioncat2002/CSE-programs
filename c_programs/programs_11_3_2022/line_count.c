#include "stdio.h"
#include "string.h"
int main(){

    char s[10];
    int lines=0;
    int words=0;
    printf("Enter a few lines");
    scanf("%[^;]s",s);
    int char_cnt=0;
    for (int i = 0; s[i]!='\0'; i++)
    {
        switch (s[i])
        {
        case '\n':
        lines++;
        case '\0':
        case ' ':
        case '\t':
        case '\r':
        if (char_cnt)
        {
            char_cnt=0;
            words++;
        }
        
            break;
        
        default:
            char_cnt++;
        }
        
    }
    
    printf("Lines: %d\n",lines);
    printf("Words: %d",words);
}