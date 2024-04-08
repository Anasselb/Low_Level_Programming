#include "main.h"

/*
 * Write a function that prints an integer.
 * Prototype: void print_number(int n);
 * You can only use _putchar function to print
 * You are not allowed to use long
 * You are not allowed to use arrays or pointers
 * You are not allowed to hard-code special values
 */
int numbercount(int n)
{
    int cnt = 0;
    while (n != 0)
    {
        n = n / 10;
        cnt++;
    }
    return cnt;
}

void print_number(int n)
{

    int result, nc, nc2;
    result = 0;

    nc = numbercount(n);
    if (n == 0)
    {
        _putchar(48);
    }
    if (n < 0)
    {
        _putchar('-');
        n = n * -1;
    }

    while (n != 0)
    {
        result = result * 10 + n % 10;
        n = n / 10;
    }
    nc2 = numbercount(result);

    while (result != 0)
    {
        if (result < 0)
        {
            _putchar('-');
            n = n * -1;
        }
        _putchar(result % 10 + '0');
        result = result / 10;
    }

    if (nc2 < nc)
    {
        while (nc2 < nc)
        {
            _putchar(48);
            nc2++;
        }
    }
}