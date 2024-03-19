#include "main.h"

/*
 * Write a function that prints the numbers, from 0 to 9, followed by a new line.
 * Prototype: void print_numbers(void);
 * You can only use _putchar twice in your code
 */

void print_numbers(void)
{
    int i;
    i = 0;
    while (i <= 9)
    {
        _putchar(i + '0');
        i++;
    }
    _putchar('\n');
}