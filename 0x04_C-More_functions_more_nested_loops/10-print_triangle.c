#include "main.h"

/*
 * Write a function that prints a triangle, followed by a new line.
 * Prototype: void print_triangle(int size);
 * You can only use _putchar function to print
 * Where size is the size of the triangle
 * If size is 0 or less, the function should print only a new line
 * Use the character # to print the triangle
 */

void print_triangle(int size)
{
    int i, j, k, alias;
    i = 1, alias = size;

    if (size == 0 || size < 0)
    {
        _putchar('\n');
    }

    while (i <= size)
    {
        j = alias - 2;
        while (j >= 0)
        {
            _putchar(' ');
            j--;
        }

        k = 1;
        while (k <= i)
        {
            _putchar('#');
            k++;
        }

        alias--;
        _putchar('\n');
        i++;
    }
}