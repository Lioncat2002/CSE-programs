#include "stdio.h"

int main(){
    int a[200];
    int n;
    printf("Entrer number of elements: ");
    scanf("%d",&n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    int sum=0,prod=1;
    int *p=a;
    for (int i = 0; i < n; i++)
    {
        if (i%2==0)
        {
            prod*=*(p+i);
        }
        else{
            sum+=*(p+i);
        }
        
    }
    printf("Sum of lelemts in odd position: %d\n",sum);

    printf("Product of lelemts in odd position: %d",prod);
    
}