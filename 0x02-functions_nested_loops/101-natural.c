#include <stdio.h>
#include "header.h"

/*
 * If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
 * Write a program that computes and prints the sum of all the multiples of 3 or 5 below 1024 (excluded), followed by a new line.
 * You are allowed to use the standard library
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

int i, x, y;
long int result;

int main(void)
{

    i = 0;
    result = 0;
    while (i <= 1024)
    {
        if (i % 3 == 0 || i % 5 == 0)
        {
            result += i;
        }
        i++;
    }

    printnumber(result);

    return (0);
}
