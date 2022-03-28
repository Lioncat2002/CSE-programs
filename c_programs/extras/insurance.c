/*
WAP to find if a person is insured or not

check the code for the full question :p
meow
*/

#include "stdio.h"
#include "string.h"
int main(){
    char location[200];
    char sex[200];
    char health[200];
    int age;

    printf("Enter location: ");
    scanf("%s",location);
    printf("Enter health: ");
    scanf("%s",health);
    printf("Enter gender: ");
    scanf("%s",sex);
    printf("Enter age: ");
    scanf("%d",&age);
    if (strcmp(location,"city")==0 &&(age>=25&&age<=35) 
    && strcmp(sex,"Male")==0 && strcmp(health,"excellent")==0)
    {
        printf("Premium rate: Rs 4/thousand\n");
        printf("Max policy: 2 lakhs");
    }
    else if (strcmp(location,"city")==0 &&(age>=25&&age<=35) 
    && strcmp(sex,"Female")==0 && strcmp(health,"excellent")==0)
    {
        printf("Premium rate: Rs 3/thousand\n");
        printf("Max policy: 1 lakhs");
    }
    else if (strcmp(location,"village")==0 &&(age>=25&&age<=35) 
    && strcmp(sex,"Male")==0 && strcmp(health,"poor")==0)
    {
        printf("Premium rate: Rs 6/thousand\n");
        printf("Max policy: Rs 10000");
    }
    else{
        printf("Not insured");
    }
}