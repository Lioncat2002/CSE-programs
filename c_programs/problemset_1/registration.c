/*
Professor_A is going to handle course-Y for the students of 
BCB, BCE, BCI, BCT, BDS, BKT. The minimum strength of the class is 10. 
Write a C program to read the registration numbers of students attending the course-Y. 
Help the professor to analyze the count value of 
students with respect to their department_category and display the same.
*/
#include "stdio.h"
#include "string.h"
int main(){
    //init roll number type counters
    int bcb,bce,bci,bct,bds,bkt;
    bcb=0;
    bce=0;
    bci=0;
    bct=0;
    bds=0;
    bkt=0;
    int n;
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        char roll_no[10];
        scanf("%s",roll_no);
        if (strstr(roll_no,"BCB")!=NULL)
        {
            bcb++;
        }
        else if (strstr(roll_no,"BCE")!=NULL)
        {
            bce++;
        } 
        if (strstr(roll_no,"BCI")!=NULL)
        {
            bci++;
        }
        if (strstr(roll_no,"BCT")!=NULL)
        {
            bct++;
        }  
        if (strstr(roll_no,"BDS")!=NULL)
        {
            bds++;
        } 
        if (strstr(roll_no,"BKT")!=NULL)
        {
            bkt++;
        }    
    }
    printf("BCB : %d\n",bcb);
    printf("BCE : %d\n",bce);
    printf("BCI : %d\n",bci);
    printf("BCT : %d\n",bct);
    printf("BDS : %d\n",bds);
    printf("BKT : %d\n",bkt);
}