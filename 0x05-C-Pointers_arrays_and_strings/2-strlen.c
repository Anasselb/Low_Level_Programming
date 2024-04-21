#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 * Write a function that returns the length of a string.
 * Return: Always 0.
 */

int _strlen(char *s)
{

    char *ptr = s;
    int cnt = 0;
    while (*ptr != '\0')
    {
        ptr++;
        cnt++;
    }

    return cnt;
}