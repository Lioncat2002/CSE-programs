#include "stdio.h"
#include "string.h"
int count=0;
void rev_sort_char(char a[200][200]){
    for (int i = 0; i < 199; i++)
    {
        if (strcmp(a[i],a[i+1])>0)
        {
            char c[200];
            strcpy(c,a[i]);
            strcpy(a[i],a[i+1]);
            strcpy(a[i+1],c);
            i=-1;
        }

    }
    for (int i = 0; i < 200; i++)
    {
        char rev[200];
        for (int j = strlen(a[i][j])-1;j>=0; j--)
        {
            rev[j]=a[i][j];
        }
        if(strcmp(rev,a[i])==0){
            count++;
        }
        printf("%s ",a[i]);
    }
    
    
}

int main(){
    char c[200][200];
    for (int i = 0; i < 3; i++)
    {
        scanf("%s",c[i]);
    }
    rev_sort_char(c);
    printf("\n Palindrome count: %d",count);
}