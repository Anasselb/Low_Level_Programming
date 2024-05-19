#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 * Write a function that concatenates two strings.
 * Prototype: char *_strncat(char *dest, char *src, int n);
 * The _strncat function is similar to the _strcat function, except that
 * it will use at most n bytes from src; and
 * src does not need to be null-terminated if it contains n or more bytes
 * Return a pointer to the resulting string dest
 * Return: Always 0.
 */

char *_strncat(char *dest, char *src, int n)
{
    char *ptod = dest, *ptos = src;
    int cnt = 0, cnts = 0;
    int i = 1;

    while (*dest++ != '\0' && *src++ != '\0')
    {
        cnt++;
        cnts++;
    }

    dest = ptod;
    dest += cnt;
    src = ptos;

    if (n <= 0)
    {
        return (0);
    }

    while (i++ <= n)
    {
        *dest++ = *src;
        src++;
        if (cnts-- < 1)
        {
            break;
        }
    }
    return ptod;
}