#include <stdio.h>
int main()
{
    int in,factor=1,sum=0,temp,digit,i=1;
    printf("Give the number here :> ");
    scanf("%d",&in);
    temp=(int)in;
    while (in!=0)
    {
        factor=1;
        digit=in%10;
        while (i<=digit)
        {
            factor=factor*i;
            i++;
        }
        printf("%d %d\n",factor,digit);
        sum=sum+factor;
        i=1;
        in=in/10;
        
    }
    printf("\n%d",sum);
    
    

    return 0;
}