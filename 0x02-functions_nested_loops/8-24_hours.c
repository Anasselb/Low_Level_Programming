#include <stdio.h>
#include "header.h"

/**
 * main - check the code
 * I'm federal agent Jack Bauer, and today is the longest day of my life
 *
 * Write a function that prints every minute of the day of Jack Bauer, starting from 00:00 to 23:59.
 *
 * Return: Always 0.
 */

void jack_bauer(void)
{
    int i, ii, iii, iv;

    i = 0;

    while (i <= 2)
    {
        ii = 0;
        while (ii <= 9)
        {
            iii = 0;
            while (iii <= 5)
            {
                iv = 0;
                while (iv <= 9)
                {
                    if (i > 1)
                    {
                        if (ii == 3 && iii == 5 && iv == 9)
                        {
                            _putchar(i + '0');
                            _putchar(ii + '0');
                            _putchar(':');
                            _putchar(iii + '0');
                            _putchar(iv + '0');
                            _putchar('\n');
                            return;
                        }
                    }

                    _putchar(i + '0');
                    _putchar(ii + '0');
                    _putchar(':');
                    _putchar(iii + '0');
                    _putchar(iv + '0');
                    _putchar('\n');

                    iv++;
                }

                iii++;
            }

            ii++;
        }

        i++;
    }
}
