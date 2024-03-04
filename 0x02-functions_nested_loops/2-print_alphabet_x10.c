#include <stdio.h>
#include "header.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 *
 * Write a function that prints 10 times the alphabet, in lowercase, followed by a new line.
 * Prototype: void print_alphabet_x10(void);
 * You can only use _putchar twice in your code
 */

void print_alphabet_x10(void)
{
    int i;
    char j;
    i = 1;
    while (i <= 10)
    {
        j = 'a';
        while (j <= 'z')
        {
            _putchar(j);
            j++;
        }
        _putchar('\n');
        i++;
    }
}

int main(void)
{
    print_alphabet_x10();
    return(0);
}