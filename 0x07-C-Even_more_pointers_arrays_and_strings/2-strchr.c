#include <stdio.h>
#include "main.h"

/*
Write a function that locates a character in a string.
Prototype: char *_strchr(char *s, char c);
Returns a pointer to the first occurrence of the character c in the string s, or NULL if the character is not found
*/

char *_strchr(char *s, char c)
{
    while (*s != '\0')
    {
        if (*s == c)
            break;
        s++;
    }

    if (*s == '\0' && *s != c)
        return '\0';

    return s;
}
