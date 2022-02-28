#include <stdio.h>
int main(int argc, char const *argv[])
{int hours , minutes , seconds ;
    time:
    printf("Give your time input in HH MM SS format :");
    scanf ("%d %d %d", &hours,&minutes,&seconds);
    if (hours>24 || minutes>60|| seconds>60)
    {
        printf("The time input is wrong \n");
        printf("Give the time properly\n");
        goto time;

    }
    else {
        printf ("Your given time is : ");
        printf("%d : %d : %d",hours,minutes,seconds);
    }
    return 0;
}