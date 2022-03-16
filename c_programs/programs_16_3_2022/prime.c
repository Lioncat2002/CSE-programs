#include "stdio.h"


int prime(int a,int b){//two intervals

    if (a<=b)//while a is less than b
    {
        int c=0;
        for (int i = 1; i <=a; i++)
        {
            if (a%i==0)
            {
                c++;
            }
            
        }
        if (c==2)
        {
            printf("%d ",a);
        }
        prime(a+1,b);
    }
    else{
        return 0;
    }

}

int main(){
    prime(9,20);
}