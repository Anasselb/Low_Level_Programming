#include <stdio.h>
#include "main.h"

/*
 * Write a function that adds two numbers. 
 * Prototype: char *infinite_add(char *n1, char *n2, char *r, int size_r);
 * Where n1 and n2 are the two numbers
 * r is the buffer that the function will use to store the result
 * size_r is the buffer size
 * The function returns a pointer to the result
 * You can assume that you will always get positive numbers, or 0
 * You can assume that there will be only digits in the strings n1 and n2
 * n1 and n2 will never be empty
 * If the result can not be stored in r the function must return 0
 */

void reverse(char *ptr)
{
    char *first = ptr, tmp;

    while (*(ptr + 1) != '\0')
    {
        ptr++;
    }

    while (ptr > first)
    {
        tmp = *ptr;
        *ptr = *first;
        *first = tmp;
        ptr--, first++;
    }
}

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{

    char *walk1 = n1, *walk2 = n2, *first = r;
    int sum, rest = 0;

    while (*(walk1 + 1) != '\0')
    {
        walk1++;
    }
    while (*(walk2 + 1) != '\0')
    {
        walk2++;
    }

    while (walk1 >= n1 && walk2 >= n2)
    {

        sum = (*walk1 - '0' + *walk2 - '0') + rest;

        if (sum > 9)
        {
            rest = sum / 10;
        }
        else
        {
            rest = 0;
        }
        *r = (sum % 10) + '0';
        r++, walk1--, walk2--, size_r--;
        if (size_r <= 0)
        {
            return NULL;
        }
    }

    while (walk1 >= n1)
    {
        sum = (*walk1 - '0') + rest;
        if (sum > 9)
        {
            rest = sum / 10;
        }
        else
        {
            rest = 0;
        }
        *r = (sum % 10) + '0';
        r++, walk1--, size_r--;
        if (size_r <= 0)
        {
            return NULL ;
        }
    }
    while (walk2 >= n2)
    {
        sum = (*walk2 - '0') + rest;
        if (sum > 9)
        {
            rest = sum / 10;
        }
        else
        {
            rest = 0;
        }

        *r = (sum % 10) + '0';
        r++, walk2--, size_r-- ;
        if (size_r <= 0 )
        {
            return NULL ;
        }
    }

    if (sum > 9)
    {
        *r = (sum / 10) + '0';
        r++ , size_r--;
         if (size_r <= 0 )
        {
            return NULL ;
        }
    }
     
    *r = '\0';
    r = first;
    reverse(r);

    return r;
}

