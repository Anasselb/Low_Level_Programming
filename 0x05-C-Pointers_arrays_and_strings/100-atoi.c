#include <stdio.h>
#include "main.h"

int _atoi(char *s)
{
    char *ptoc = s;
    int result = 0, sign = 1;

    while (*ptoc != '\0')
    {
        if (*ptoc == '-')
        {
            sign *= -1;
        }
        if (*ptoc >= '0' && *ptoc <= '9')
        {
            result = result * 10 + *ptoc - '0';
            if (result > 0 && *(ptoc + 1) == ' ')
            {
                goto end;
            }
        }
        ptoc++;
    }
end:
    return result * sign;
}