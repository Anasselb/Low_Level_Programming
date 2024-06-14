#include <stdio.h>
#include "main.h"

/*
Write a function that gets the length of a prefix substring.
Prototype: unsigned int _strspn(char *s, char *accept);
Returns the number of bytes in the initial segment of s which consist only of bytes from accept
*/

unsigned int _strspn(char *s, char *accept)
{
    unsigned int i = 0, j, cnt = 0;
    int check;

    while (s[i] != '\0')
    {
        j = 0;
        check = 0;
        while (accept[j] != '\0')
        {
            if (s[i] == accept[j])
            {
                cnt++;
                check++;
            }
            j++;
        }
        if (accept[j] == '\0' && check == 0)
            break;
        i++;
    }

    return cnt;
}