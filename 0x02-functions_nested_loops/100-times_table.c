#include <stdio.h>
#include "header.h"

/**
 * main - check the code.
 *
 * Write a function that prints the n times table, starting with 0.
 * Prototype: void print_times_table(int n);
 * If n is greater than 15 or less than 0 the function should not print anything
 * Return: Always 0.
 */
void printnumber(int n)
{

    int digit, cnt, list[10], i, j, f_r;

    i = 0;
    cnt = 0;

    if (n < 0)
    {
        _putchar('-');
        n = n * -1;
    }

    if (n == 0)
    {
        _putchar(48);
    }

    while (n != 0)
    {
        digit = n % 10;
        list[i++] = digit;
        cnt++;
        n = n / 10;
    }

    j = cnt - 1;
    while (j >= 0)
    {
        f_r = list[j];
        _putchar(f_r + '0');
        j--;
    }
}

void print_times_table(int n)
{
    int i, ii, result;

    if (n < 0 || n > 15)
    {
        return;
    }
    i = 0;
    while (i <= n)
    {
        ii = 0;
        printnumber(0);
        while (ii <= n)
        {

            result = i * ii;
            if (ii != n)
            {

                if (result <= 9)
                {
                    _putchar(',');
                    _putchar(' ');
                    _putchar(' ');
                    _putchar(' ');
                    printnumber(result);
                }

                if (result > 9 && result <= 99)
                {
                    _putchar(',');
                    _putchar(' ');
                    _putchar(' ');
                    printnumber(result);
                }

                if (result > 99)
                {
                    _putchar(',');
                    _putchar(' ');
                    printnumber(result);
                }
            }

            ii++;
        }

        _putchar('\n');
        i++;
    }
}
