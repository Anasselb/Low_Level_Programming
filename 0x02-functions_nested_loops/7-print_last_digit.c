#include <stdio.h>
#include "header.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 *
 * Write a function that prints the last digit of a number.
 * Prototype: int print_last_digit(int);
 * Returns the value of the last digit
 */

int print_last_digit(int n)
{

    if (n < 0)
    {
        n = n * -1;
    }
    _putchar(n % 10 + '0');
    return n % 10;
}
