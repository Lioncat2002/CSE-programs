// x-x^3+x^5-x^7....

#include "stdio.h"
#include "math.h"
int main(){
    int x;
    int n;
    int sum=0;

    printf("Enter x: ");
    scanf("%d",&x);
    printf("Enter n: ");
    scanf("%d",&n);
    int i=0;
    do
    {
        i++;
        if (i%2==0)
        {
            sum-=pow(x,i+1);
            
        }
        else{
            sum+=pow(x,i);
        }
        
    } while (i<=n);
    printf("Sum: %d",sum);
    
}