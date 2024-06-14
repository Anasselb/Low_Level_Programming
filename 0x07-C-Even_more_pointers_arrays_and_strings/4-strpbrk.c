#include <stdio.h>
#include "main.h"

/*
 Write a function that searches a string for any of a set of bytes.
Prototype: char *_strpbrk(char *s, char *accept);
The _strpbrk() function locates the first occurrence in the string s of any of the bytes in the string accept
Returns a pointer to the byte in s that matches one of the bytes in accept, or NULL if no such byte is found
*/

char *_strpbrk(char *s, char *accept)
{

    int i = 0;

    while (*s != '\0')
    {
        i = 0;
        while (accept[i])
        {
            if (*s == accept[i])
                return s;

            i++;
        }
        s++;
    }
    return NULL;
}