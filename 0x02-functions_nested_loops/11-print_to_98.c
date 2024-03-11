#include <stdio.h>
#include "header.h"

/**
 * main - check the code
 *
 * Write a function that prints all natural numbers from n to 98, followed by a new line.
 * Prototype: void print_to_98(int n);
 * Numbers must be separated by a comma, followed by a space
 * Numbers should be printed in order
 * The first printed number should be the number passed to your function
 * The last printed number should be 98
 * You are allowed to use the standard library
 *
 * Return: Always 0.
 */

void printdigits(int n)
{

    int cnt, alias, array[10], i, j, res;
    ;
    alias = n;
    cnt = 0;

    while (n != 0)
    {
        n = n / 10;
        cnt++;
    }
    n = alias;

    if (n == 0)
    {
        _putchar(48);
    }
    if (n < 0)
    {
        _putchar('-');
        n = n * -1;
    }
    i = 0;
    while (n != 0)
    {
        array[i++] = n % 10;
        n = n / 10;
    }

    j = cnt - 1;

    while (j >= 0)
    {
        res = array[j];
        _putchar(res + '0');
        j--;
    }
}

void print_to_98(int n)
{
    int i;
    if (n > 98)
    {
        i = n;
        while (i >= 98)
        {
            printdigits(i);

            if (i != 98)
            {
                _putchar(',');
                _putchar(' ');
            }
            i--;
        }
    }
    else
    {
        i = n;
        while (i <= 98)
        {
            printdigits(i);
            if (i != 98)
            {
                _putchar(',');
                _putchar(' ');
            }
            i++;
        }
    }
    _putchar('\n');
}
