#include "main.h"

/*
 * Write a function that prints 10 times the numbers, from 0 to 14, followed by a new line.
 * Prototype: void more_numbers(void);
 * You can only use _putchar three times in your code
 */

void more_numbers(void)
{
    int i, ii;

    i = 1;
    while (i <= 10)
    {
        ii = 0;
        while (ii <= 14)
        {
            if (ii <= 9)
            {
                _putchar(ii + '0');
            }
            else
            {
                _putchar(ii / 10 + '0');
                _putchar(ii % 10 + '0');
            }

            ii++;
        }
        printf("\n");
        i++;
    }
}