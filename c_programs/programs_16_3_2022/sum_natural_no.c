#include "stdio.h"

int sum_natural(int n,int sum){
    if (n<=0)
    {
        return sum;
    }
    else
    {
        sum+=n;
        n--;
        sum_natural(n,sum);
    }
    
}

int main(int argc, char const *argv[])
{
    int sum=sum_natural(10,0);
    printf("%d ",sum);
    return 0;
}
