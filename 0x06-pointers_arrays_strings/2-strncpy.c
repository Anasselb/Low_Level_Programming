#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 * Write a function that copies a string.
 * strncpy is a function in C used for copying a specified number of characters from one string to another.
 * Prototype: char *_strncpy(char *dest, char *src, int n);
 * Return: Always 0.
 */

char *_strncpy(char *dest, char *src, int n)
{
    char *ptoc = dest, *ptos = src;
    int cnts = 0;
    int i = 1;
    while (*src++ != '\0')
    {
        cnts++;
    }
    src = ptos;
    while (i <= n)
    {
        *dest++ = *src++, i++;
        if (*src == '\0')
            break;
    }

    if (*src == '\0' && i++ < n)
        *dest++ = '\0';

    return ptoc;
}