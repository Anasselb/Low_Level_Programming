#include <stdio.h>
#include "main.h"

/**
 * main - check the code for
 * Write a function that prints n elements of an array of integers, followed by a new line.
 * Prototype: void print_array(int *a, int n);
 * where n is the number of elements of the array to be printed
 * Numbers must be separated by comma, followed by a space
 * The numbers should be displayed in the same order as they are stored in the array
 * You are allowed to use printf
 * Return: Always 0.
 */

void print_array(int *a, int n)
{
    int *ptr = a;

    while (ptr <= a + n - 1)
    {
        printf("%d", *ptr);

        if (ptr != a + n - 1)
        {
            printf(", ");
        }
        ptr++;
    }
    printf("\n");
}