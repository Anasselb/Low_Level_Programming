#include <stdio.h>

/* Write a program that prints the alphabet in lowercase, followed by a new line.
   Print all the letters except q and e
   You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
   All your code should be in the main function
   You can only use putchar twice in your code */

int main()
{
    char i = 'a' ;
    while (i <= 'z')
    {
     if (i == 'e' || i == 'q')
     {
        i++ ;
     }
       putchar(i) ;
        i++;

    }
       putchar('\n');

       return(0) ;

}