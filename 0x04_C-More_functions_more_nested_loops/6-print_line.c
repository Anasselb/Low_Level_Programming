#include "main.h"

void print_line(int n)
{
    int i;
    i = 0 ;
    if (n == 0 || n < 0)
    {
        _putchar('\n');
    }

    while (i < n)
    {
        _putchar('_');
        i++;
        if (i == n)
        {
            _putchar('\n');
        }
    }
}