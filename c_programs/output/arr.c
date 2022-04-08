#include "stdio.h"
int main()
 {
 int i, j;
 int a[8] = {1, 2, 3, 4, 5, 6, 7, 8};
 for(i=0; i<3; i++)
 {
 a[i] = a[i]+1;//increases values of each array by 1 for the 1st 3 elements
 i++;//does another i+=1
 //analogous to i+=2 if we count the increment in the for loop
 }
 i--;//decreamenting by 1
 for(j=7; j>4; j--)
 {
 int i = j/2;//local variable limited only to this for block
 a[i] = a[i]-1;//decreases values by 1
 }
 printf("%d %d", i, a[i]);//will print 3 and 2
 }