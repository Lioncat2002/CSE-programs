#include <stdio.h>

int main(){
    int a[10];
    for (int i = 0; i < 10; i++)
    {
        printf("Enter a number");
        scanf("%d",&a[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n",a[i]);
        
    }
    
}