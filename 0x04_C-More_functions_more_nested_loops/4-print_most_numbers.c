#include "main.h"

/*
 * Write a function that prints the numbers, from 0 to 9, followed by a new line.
 * Prototype: void print_most_numbers(void);
 * Do not print 2 and 4
 * You can only use _putchar twice in your code
 */

void print_most_numbers(void)
{
    int i;
    i = 0;
    while (i <= 9)
    {
        if (i == 2 || i == 4)
        {
            goto point;
        }
        else
        {
            _putchar(i + '0');
        }

    point:
        i++;
    }
    _putchar('\n');
}
