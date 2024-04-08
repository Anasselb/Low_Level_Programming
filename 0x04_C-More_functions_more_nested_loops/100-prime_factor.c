#include <stdio.h>

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
