#include <stdio.h>
#include <string.h>

void read_string(char *str)
{
    printf("Enter the command > ");
    fgets(str,40, stdin);
}
