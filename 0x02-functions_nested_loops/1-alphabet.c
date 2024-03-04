#include <stdio.h>
#include "header.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 *
 * Write a function that prints the alphabet, in lowercase, followed by a new line.
 * Prototype: void print_alphabet(void);
 * You can only use _putchar twice in your code
 */

void print_alphabe(void)
{
    char ch;
    ch = 'a';
    while (ch <= 'z')
    {
        _putchar(ch);
        ch++;
    }
    _putchar('\n');
}
