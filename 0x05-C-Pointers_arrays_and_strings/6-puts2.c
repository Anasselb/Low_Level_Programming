#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 * Write a function that prints every other character of a string, starting with the first character, followed by a new line.
 * Return: Always 0.
 */

void puts2(char *str)
{
    char *ptr;
    ptr = str;

    while (*ptr != '\0')
    {

        printf("%c", *ptr);

        ptr = ptr + 2;
    }
    printf("\n");
}