#include <stdio.h>
#include "header.h"

/**
 * main - check the code
 *
 * Write a function that prints the 9 times table, starting with 0.
 *
 * Prototype: void times_table(void);
 *
 * Return: Always 0.
 */

void times_table(void)
{

    int i, ii, mult_res;

    i = 0;
    while (i <= 9)
    {
        ii = 0;
        mult_res = 0;
        while (ii <= 9)
        {
            mult_res = i * ii;

            if (mult_res < 10)
            {
                _putchar(mult_res + '0');
            }
            else
            {
                _putchar(mult_res / 10 + '0');
                _putchar(mult_res % 10 + '0');
            }

            if (ii != 9)
            {
                if (mult_res < 10)
                {
                    _putchar(',');
                    _putchar(' ');
                    _putchar(' ');
                }
                else
                {
                    _putchar(',');
                    _putchar(' ');
                }
            }

            ii++;
        }
        _putchar('\n');
        i++;
    }
}
