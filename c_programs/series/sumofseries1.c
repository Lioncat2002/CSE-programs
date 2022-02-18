#include "stdio.h"

int main(){
    int limit;
    float sum=0.0f;
    printf("Enter the limit: ");
    scanf("%d",&limit);

    for(int i=1;i<=limit;i++){
        sum+=1.0/(float)i; //huh need to cast into float to work properly
        printf("%f\n",(1/i));
    }
    printf("Sum of series: %.3f",sum);
}