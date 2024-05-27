#include <stdio.h>
#include "main.h"

/* Write a function that encodes a string using rot13.
 * Prototype: char *rot13(char *);
 * You can only use if statement once in your code
 * You can only use two loops in your code
 * You are not allowed to use switch
 * You are not allowed to use any ternary operation */

void subrot13(char *ptoc)
{
    char r1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    char r2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
    int i, j;

    for (i = 0; i <= 52; i++)
    {

        if (*ptoc == r1[i])
        {
            j = i;
            *ptoc = r2[j];
            break;
        }
    }
}

char *rot13(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
        {
            subrot13(str + i);
        }
        i++;
    }
    return str;
}