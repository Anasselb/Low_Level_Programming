#include "main.h"

/*
 * Write a function that draws a diagonal line on the terminal.
 * Prototype: void print_diagonal(int n);
 * You can only use _putchar function to print
 * Where n is the number of times the character \ should be printed
 * The diagonal should end with a \n
 * If n is 0 or less, the function should only print a \n
 */

void print_diagonal(int n)
{
    int i, j;
    i = 0;
    if (n == 0 || n < 0)
    {
        _putchar('\n');
    }

    while (i < n)
    {
        j = 0;
        while (j <= i)
        {
            if (j != i)
            {
                _putchar(' ');
            }
            else
            {
                _putchar('\\');
            }

            j++;
        }
        _putchar('\n');
        i++;
    }
}