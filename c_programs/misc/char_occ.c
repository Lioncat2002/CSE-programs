#include <stdio.h>

int main(){
    char str[200];
    char c;
    int counter=0;
    fgets(str,200,stdin);
    scanf("%c",&c);

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i]==c)
        {
            counter++;
        }
        
    }
    printf("%d",counter);
}