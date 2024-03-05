#include <stdio.h>
#include "header.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 * Write a function that checks for alphabetic character.
 * Prototype: int _isalpha(int c);
 * Returns 1 if c is a letter, lowercase or uppercase
 * Returns 0 otherwise
 */

int _isalpha(int c)
{
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
    {
        return (1);
    }
    else
    {
        return (0);
    }
}
