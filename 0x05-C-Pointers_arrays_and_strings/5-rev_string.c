#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 * Write a function that reverses a string.
 * Return: Always 0.
 */

void rev_string(char *s)
{
    char *ptr, *ptr2, tmp;
    int cnt = 0;
    ptr = s;

    if (!s)
    {
        retun;
    }

    while (*(ptr + 1) != '\0')
    {
        ptr++;
        cnt++;
    }

    ptr = s;
    ptr2 = s + cnt;
    while (ptr2 > ptr)
    {
        tmp = *ptr;
        *ptr = *ptr2;
        *ptr2 = tmp;
        ptr++;
        ptr2--;
    }
}