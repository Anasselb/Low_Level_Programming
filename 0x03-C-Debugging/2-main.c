#include "main.h"
/**
 * main - prints the largest of 3 integers
 * Return: 0
 * subject : 
 * Fix the code in 2-largest_number.c so that it correctly prints out the largest of three numbers, no matter the case.
 */

int main(void)
{
    int a, b, c;
    int largest;

    a = 972;
    b = -98;
    c = 0;

    largest = largest_number(a, b, c);

    printf("%d is the largest number\n", largest);

    return (0);
}