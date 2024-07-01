#include <stdio.h>
#include "main.h"

/*Write a function that prints the sum of the two diagonals of a square matrix of integers.
Prototype: void print_diagsums(int *a, int size);
Format: see example
You are allowed to use the standard library
Note that in the following example we are casting an int[][] into an int*.
This is not something you should do. The goal here is to make sure you understand how an array of array is stored in memory.*/
void print_diagsums(int *a, int size)
{

    long int dr1 = 0, dr2 = 0;
    int i = 0, j = size - 1, cnt = 1, r = size + 1;

    while (i < size * size)
    {
        dr1 += a[i], i = i + r;
    }
    while (cnt <= size)
    {
        dr2 += a[j], j += size - 1, cnt++;
    }
    printf(" %ld  %ld\n", dr1, dr2);
}
