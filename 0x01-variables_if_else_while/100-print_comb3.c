#include <stdio.h>

/*  Write a program that prints all possible different combinations of two digits.
    Numbers must be separated by , , followed by a space
    The two digits must be different
    01 and 10 are considered the same combination of the two digits 0 and 1
    Print only the smallest combination of two digits
    Numbers should be printed in ascending order, with two digits
    You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
    You can only use putchar five times maximum in your code
    You are not allowed to use any variable of type char
    All your code should be in the main function */

int i , j , alias ;
int main ()

{

i = 48 ;
alias = 49 ;
while (i <= 56)
{    
     j = alias ;
     while (j <= 57)
     {
        putchar(i) ;
        putchar(j) ;

        if (i != 56)
        {
         putchar(',') ;
         putchar(' ') ; 
        }
        j++ ;
     }
     i++;
     alias = i+1 ;
}
  return (0) ;
}
