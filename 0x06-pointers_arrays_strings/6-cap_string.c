#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 * Write a function that capitalizes all words of a string.
 * Prototype: char *cap_string(char *);
 * Separators of words: space, tabulation, new line, ,, ;, ., !, ?, ", (, ), {, and }
 * Return: Always 0.
 */

char *cap_string(char *str)
{
    int i = 0;

    while (str[i++] != '\0')
    {
        if (str[i] == '\t')
        {
            str[i] = ' ';
        }

        if ((str[i] == ' ' || str[i] == '\n' || str[i] == ',' || str[i] == ';' ||
            str[i] == '.' || str[i] == '!' || str[i] == '?' || str[i] == '"' ||
            str[i] == '(' || str[i] == ')' || str[i] == '{' || str[i] == '}') &&
            (str[i + 1] != ' ' || str[i + 1] != '\n' || str[i + 1] != ',' ||
            str[i + 1] != ';' || str[i + 1] != '.' || str[i + 1] != '!' ||
            str[i + 1] != '?' || str[i + 1] != '"' || str[i + 1] != '(' ||
            str[i + 1] != ')' || str[i + 1] != '{' || str[i + 1] != '}') &&
            str[i + 1] >= 'a' && str[i + 1] <= 'z')
        {
            str[i + 1] -= 32;
        }
    }

    return (str);
}
