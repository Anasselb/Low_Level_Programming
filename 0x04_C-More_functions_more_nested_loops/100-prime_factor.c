#include <stdio.h>

/*
The prime factors of 1231952 are 2, 2, 2, 2, 37 and 2081.
Write a program that finds and prints the largest prime factor of the number 612852475143, followed by a new line.
You are allowed to use the standard library
Your program will be compiled with this command: gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-prime_factor.c -o 100-prime_factor -lm
*/

int main(void)
{

    long int n = 612852475143, factors = 2, the_largest_one;

    while (n != 1)
    {
    stepone:
        if (n % factors == 0)
        {
            the_largest_one = factors;
        }
        else
        {
            factors++;
            goto stepone;
        }
        n = n / factors;
        if (the_largest_one > factors)
        {
            printf("%ld", the_largest_one);
        }
        else
        {
            the_largest_one = factors;
            printf("%ld", the_largest_one);
        }
    }

    return (0);
}
