#include <stdio.h>
#include "main.h"

/*
Write a function that prints a buffer.
Prototype: void print_buffer(char *b, int size);
The function must print the content of size bytes of the buffer pointed by b
The output should print 10 bytes per line
Each line starts with the position of the first byte of the line in hexadecimal (8 chars), starting with 0
Each line shows the hexadecimal content (2 chars) of the buffer, 2 bytes at a time, separated by a space
Each line shows the content of the buffer. If the byte is a printable character, print the letter, if not, print .
Each line ends with a new line \n
If size is 0 or less, the output should be a new line only \n
You are allowed to use the standard library
The output should look like the following example, and formatted exactly the same way:

*/

void print_buffer(char *b, int size)
{
    int i, j, k, cnt = 0, j_cnt;

    for (i = 0; i < size; i += 10)
    {
        j = i, k = i;
        printf("%08x : ", i);
        j_cnt = 0;
        while (j < i + 10)
        {
            if (j == size)
            {
                break;
            }
            printf("%02x", b[j]);
            cnt++;
            if (cnt == 2)
            {
                printf(" ");
                cnt = 0;
            }
            j_cnt++, j++;
        }
        if (j_cnt < 10)
        {
            while (j_cnt <= 10)
            {
                printf("  ");
                j_cnt++;
            }
        }

        while (k < i + 10)
        {
            if (k == size)
            {
                break;
            }
            if (b[k] >= 0 && b[k] <= 31)
            {

                printf(".");
            }
            else
            {
                printf("%c", b[k]);
            }
            k++;
        }
        printf("\n");
    }
}

