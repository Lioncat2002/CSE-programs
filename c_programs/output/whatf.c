#include "stdio.h"

int f(int n)
{
static int i=1;//adding static means 
//that the value of i won't get reset 
//back to 1 once the program starts running
n = n+i;//adding i to n
i++;
if(n>=5) 
//checks if n>=5
return n;//in which case it will return n
else 
return f(n);//else it calls itself with the new value of n

}
/*
Step 1:
initially
n=1
i=1
after 
n=n+i = 1+1=2
i++ = 2

Step 2:
initially
n=2
i=2
after 
n=n+i = 2+2=4
i++ = 3

Step 3:
initially
n=4
i=3
after 
n=n+i = 4+3=7
i++ = 4

Now n is > 5
hence it will exit the function and return 7
*/

int main(){
    printf("%d",f(1));
}