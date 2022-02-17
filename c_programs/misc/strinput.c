#include "stdio.h"

int main(int argc, char const *argv[])
{
    char str[200];
    scanf("%[^\n]s",str);
    printf("You entered: %s",str);
    return 0;
}
