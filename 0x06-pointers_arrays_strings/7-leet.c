#include <stdio.h>

/**
 * subject :
 * Write a function that encodes a string into 1337.
 * Letters a and A should be replaced by 4
 * Letters e and E should be replaced by 3
 * Letters o and O should be replaced by 0
 * Letters t and T should be replaced by 7
 * Letters l and L should be replaced by 1
 * You can only use one if in your code
 * You can only use two loops in your code
 * You are not allowed to use switch
 * You are not allowed to use any ternary operation
 */

void subleet(char *ptr)
{

    char let[] = {'a', 'A', 'e', 'E', 't', 'T', 'l', 'L', 'o', 'O'};
    char dig[] = {'4', '4', '3', '3', '7', '7', '1', '1', '0', '0'};
    int i, j;

    for (i = 0; i <= 9; i++)
    {
        j = i;
        if (*ptr == let[i])
        {
            *ptr = dig[j];
            break;
        }
    }
}

char *leet(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        if ((str[i] == 'a' || str[i] == 'A') ||
            (str[i] == 'e' || str[i] == 'E') ||
            (str[i] == 'o' || str[i] == 'O') ||
            (str[i] == 'l' || str[i] == 'L') ||
            (str[i] == 't' || str[i] == 'T'))
        {
            subleet(str + i);
        }

        i++;
    }
    return str;
}