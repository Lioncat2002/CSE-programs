#include "stdio.h"

typedef struct 
{
    int day;
    int month;
    int year;
}Date;


int main(){

    Date curr_date;
    int months[]={31,28,31,30,31,30,31,31,30,31,30,31};
    printf("enter date :");
    scanf("%d/%d/%d",&curr_date.day,&curr_date.month,&curr_date.year);
    curr_date.day+=45;
    while (curr_date.day>months[curr_date.month-1])
    {
        curr_date.day=curr_date.day-months[curr_date.month-1];
        if (curr_date.month<12)
        {
            curr_date.month++;
        }else{
            curr_date.month=1;
            curr_date.year++;
        }
        
    }
    
    printf("\n%d/%d/%d\n",curr_date.day,curr_date.month,curr_date.year);
}

