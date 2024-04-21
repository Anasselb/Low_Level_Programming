#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 * Write a function that prints a string, in reverse, followed by a new line.
 * Return: Always 0.
 */

void print_rev(char *s)
{
    char *ptr = s;
    int cnt;

    while (*ptr != '\0')
    {
        ptr++;
        cnt++;
    }
    ptr = s + cnt;

    while (ptr >= s)
    {
        printf("%c", *ptr);
        ptr--;
    }
    printf("\n");
}