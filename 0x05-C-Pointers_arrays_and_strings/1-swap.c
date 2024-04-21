#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 * Write a function that swaps the values of two integers.
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}
