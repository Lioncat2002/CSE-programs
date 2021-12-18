#include <stdio.h>
#include<math.h>


float function(float x){
    return (float)(pow((double)x,4)-5*pow((double)x,2)+4);
}

float solver(float a,float b,float c){
    float x1=function(a);
    float x2=function(b);

    if(x1==0){
        return a;
    }
    else if(x1*x2<0){
        c=(a+b)/2;
        float xtmp=function(c);
        if(xtmp<0){
            a=c;
        }
        if(xtmp>0){
            b=c;
        }
        if(round(function(c))==0.00){
            return c;
        }
        else{
            solver(a,b,c);
        }

    }
    
}

int main()
{
    for(int i=-10;i<=10;i++){
        if(solver(i,i+1,0))
        printf("%f \n",solver(i,i+1,0));
    }
    return 0;
}
