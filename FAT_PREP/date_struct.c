#include <stdio.h>

struct Date{
    int day;
    int month;
    int year;
};

int compare(struct Date date1,struct Date date2){
    if(date1.day==date2.day && date1.month==date2.month && date1.year==date2.year){
      return 0;
    }
    return 1;
}

int main(){
    struct Date d1,d2;
    scanf("%d/%d/%d",&d1.day,&d1.month,&d1.year);
    scanf("%d/%d/%d",&d2.day,&d2.month,&d2.year);
    int flag=compare(d1,d2);
    printf("%d",flag);
}
