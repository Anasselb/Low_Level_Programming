#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *Write a function that copies the string pointed to by src,
 * including the terminating null byte (\0), to the buffer pointed to by dest.
 * Return value: the pointer to dest
 * Return: Always 0.
 */

char *_strcpy(char *dest, char *src)
{
    char *ptr = dest;
    while (*src != '\0')
    {
        *dest = *src;
        src++;
        dest++;
    }

    return ptr;
}