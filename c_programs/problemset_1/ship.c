/*
WAP to input the 1st letter of a serial and print the Ship Class
*/

#include "stdio.h"

int main(){
    char ship_class;
    
    scanf("%c",&ship_class);

    switch (ship_class)
    {
    case 'B':
    case 'b':
        printf("Battleship");
        break;
    case 'C':
    case 'c':
        printf("Cruiser");
        break;
    case 'D':
    case 'd':
        printf("Destroyer");
        break;
    case 'F':
    case 'f':
        printf("Frigate");
        break;   
    default:
        break;
    }
    
}