#include <stdio.h>
#include "main.h"

/*
 * Write a function that compares two strings.
 * If it encounters a pair of characters that are different,
 * it calculates the difference between the ASCII values of these characters.
 */

int _strcmp(char *s1, char *s2)
{
    int result = 0;
    int check = 0;

    while (*s1 != '\0' && *s2 != '\0')
    {
        if (*s1 != *s2)
        {
            check++, result = *s1 - *s2;
            break;
        }
        s1++, s2++;
    }
    if ((*s1 == '\0' && *s2 == '\0') && check == 1)
    {
        result = 0;
    }

    return result;
}