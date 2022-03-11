//WAP to check if a atring is palindrome or not

#include "stdio.h"
#include "string.h"
int main(){
    char s[200],s1[200];
    printf("Enter the string: ");
    gets(s);
    int i,j;
    for (i = strlen(s)-1,j=0;i>=0; i--,j++)
    {
        s1[j]=s[i];
    }
    s1[j]='\0';
    if (strcmp(s1,s)==0)
    {
        printf("Palindrome");
    }
    else{
        printf("Not palindrome");
    }
    
    
    
}