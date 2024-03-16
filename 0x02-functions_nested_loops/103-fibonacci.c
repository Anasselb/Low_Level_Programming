#include <stdio.h>
#include "header.h"

/*
 * write a program that compute the sum of even fibonacci numbers up to 4,000,000
 * You are allowed to use the standard library
 */

void printnumber(unsigned long int n)
{

    unsigned long int digit, list[10];
    int cnt, i, j, f_r;

    i = 0;
    cnt = 0;

    if (n == 0)
    {
        _putchar(48);
    }

    while (n != 0)
    {
        digit = n % 10;
        list[i++] = digit;
        cnt++;
        n = n / 10;
    }

    j = cnt - 1;
    while (j >= 0)
    {
        f_r = list[j];
        _putchar(f_r + '0');
        j--;
    }
}

int main(void)
{
    unsigned long int sum, previous_value, actual_value, next_value;

    previous_value = 1;
    actual_value = 2;
    next_value = previous_value + actual_value;
    sum = actual_value;

    while (next_value <= 4000000)
    {
        if (next_value % 2 == 0)
        {
            sum += next_value;
        }

        previous_value = actual_value;
        actual_value = next_value;
        next_value = previous_value + actual_value;
    }

    printnumber(sum);
    return (0);
}