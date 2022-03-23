#include "stdio.h"
#include "stdlib.h"
int main(){
    int n;
    double sum,avg;
    int enrollments[20];
    scanf("%d",&n);

    sum=0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&enrollments[i]);
        sum+=enrollments[i];
    }
    avg=sum/n;
    for (int i = 0; i < n; i++)
    {
        printf("%d\n",(int)abs(enrollments[i]-avg));
    }
}