#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 * The function should print the second half of the string
 * If the number of characters is odd, the function should print the last n characters of the string,
 * where n = (length_of_the_string - 1) / 2
 * Return: Always 0.
 */

void puts_half(char *str)
{

    char *ptr;
    int cnt;
    ptr = str;
    cnt = 0;

    while (*ptr != '\0')
    {
        ptr++;
        cnt++;
    }

    if (cnt % 2 != 0)
    {
        ptr = str + (cnt - 1) / 2;
    }
    else
    {
        ptr = str + cnt / 2;

        while (*ptr != '\0')
        {
            printf("%c", *ptr);
            ptr++;
        }
    }
}