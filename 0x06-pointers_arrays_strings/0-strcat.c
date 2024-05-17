#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 * Write a function that concatenates two strings.
 * Prototype: char *_strcat(char *dest, char *src);
 * This function appends the src string to the dest string, overwriting the terminating null byte (\0) at the end of dest, and then adds a terminating null byte
 * Returns a pointer to the resulting string dest
 * Return: Always 0.
 */

char *_strcat(char *dest, char *src)
{
    int cnt = 0;
    char *ptof = dest;
    char *ptod = ptof;

    while (*dest != '\0')
    {
        cnt++;
        dest++;
    }

    dest = ptof;
    dest += cnt;

    while (*src != '\0')
    {
        *dest = *src;
        dest++;
        src++;
    }
    return ptod;
}