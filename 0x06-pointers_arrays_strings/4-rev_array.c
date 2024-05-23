#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 * @a: an array of integers
 * @n: the number of elements to swap
 * Write a function that reverses the content of an array of integers.
 * Where n is the number of elements of the array.
 * Prototype: void reverse_array(int *a, int n);
 * Return: nothing.
 */

void reverse_array(int *a, int n)
{
    int *ptoa = a;
    a = a + n - 1;
    while (a >= ptoa)
    {
        printf("%d", *a--);
        if (a >= ptoa)
            printf(", ");
    }
    printf("\n");
}
