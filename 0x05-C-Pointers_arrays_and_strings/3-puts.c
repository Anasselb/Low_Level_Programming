#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 * Write a function that prints a string, followed by a new line, to stdout.
 * Return: Always 0.
 */

void _puts(char *str)
{
    char *ptr = str;
    while (*ptr != '\0')
    {
        printf("%c", *ptr);
        ptr++;
    }
    printf("\n");
}