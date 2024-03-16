#include <stdio.h>
#include "header.h"

/*
 * Write a program that prints the first 50 Fibonacci numbers, starting with 1 and 2, followed by a new line.
 * The numbers must be separated by comma, followed by a space ,
 * You are allowed to use the standard library
 */

void printnumber(unsigned long int n)
{

    unsigned long int digit, list[10];
    int cnt, i, j, f_r;

    i = 0;
    cnt = 0;

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

int main(void)
{
    unsigned long int actual_result, previous_result, next_result;
    int i, ii;

    previous_result = 1;
    actual_result = 2;
    i = 1;
    _putchar(49);
    _putchar(',');
    _putchar(' ');
    _putchar(50);
    _putchar(',');
    _putchar(' ');

    while (i <= 49 - 2)
    {
        ii = i;
        while (ii <= i)
        {
            next_result = actual_result + previous_result;

            printnumber(next_result);

            if (i != 49 - 2)
            {
                _putchar(',');
                _putchar(' ');
            }

            previous_result = actual_result;
            actual_result = next_result;

            ii++;
        }

        i++;
    }

    _putchar('\n');

    return (0);
}
