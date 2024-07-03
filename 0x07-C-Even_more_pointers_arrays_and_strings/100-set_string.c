#include <stdio.h>
#include "main.h"


/*Write a function that sets the value of a pointer to a char*/

void set_string(char **s, char *to)
{
    int i = 0;
    char str[50];
    while (to[i] != '\0')
    {
        str[i] = to[i];
        i++;
    }
    *s = str;
}