#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 * Write a function that changes all lowercase letters of a string to uppercase.
 * Prototype: char *string_toupper(char *);
 * Return: Always 0.
 */

char *string_toupper(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] = (str[i] - 32);
        i++;
    }

    return str;
}
