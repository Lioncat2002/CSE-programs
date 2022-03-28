#include "stdio.h"

void fun1(char *s1, char *s2)
{
    /*
    This function is call by value
    hence it just changes the value of s1 and s2
    but not the memory address
    */
 char *tmp;
 tmp = s1;
 s1 = s2;
 s2 = tmp;
}
void fun2 (char **s1, char **s2)
{
    /*
    This function is call by reference
    hence it just changes the value of s1 and s2
    via directly changing the memory address
    hence the output will be changed
    */
char *tmp;
tmp = *s1;
*s1 = *s2;
 *s2 = tmp;
}

int main()
{
char *str1 = "Hi", *str2 = "bye";
fun1(str1, str2);
printf("%s%s", str1, str2);
fun2(&str1, &str2);
printf("%s%s", str1, str2);
return 0;
}