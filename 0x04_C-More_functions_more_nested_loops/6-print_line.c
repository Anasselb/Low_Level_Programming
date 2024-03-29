#include "main.h"

/*
 * Write a function that draws a straight line in the terminal.
 * Prototype: void print_line(int n);
 * You can only use _putchar function to print
 * Where n is the number of times the character _ should be printed
 * The line should end with a \n
 * If n is 0 or less, the function should only print \n
 */

void print_line(int n)
{
    int i;
    i = 0;
    if (n == 0 || n < 0)
    {
        _putchar('\n');
    }

    while (i < n)
    {
        _putchar('_');
        i++;
        if (i == n)
        {
            _putchar('\n');
        }
    }
}