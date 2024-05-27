#include <stdio.h>
#include "main.h"

/*
 * Write a function that prints an integer.
 * Prototype: void print_number(int n);
 * You can only use _putchar function to print
 * You are not allowed to use long
 * You are not allowed to use arrays or pointers
 * You are not allowed to hard-code special values*/

void print_number(int n)
{
    int result = 0, digit;

    if (n < 0)
    {
        _putchar('-');
        n *= -1;
    }

    if (n == 0)
    {
        _putchar(48);
    }

    while (n != 0)
    {
        digit = n % 10;
        result = result * 10 + digit;
        n = n / 10;
    }

    while (result != 0)
    {
        _putchar(result % 10 + '0');
        result /= 10;
    }
}