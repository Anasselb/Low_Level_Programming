#include <stdio.h>


/*Write a program that prints all possible different combinations of three digits.
  Numbers must be separated by ,, followed by a space
  The three digits must be different
  012, 120, 102, 021, 201, 210 are considered the same combination of the three digits 0, 1 and 2
  Print only the smallest combination of three digits
  Numbers should be printed in ascending order, with three digits
  You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
  You can only use putchar six times maximum in your code
  You are not allowed to use any variable of type char
  All your code should be in the main function */

int main()
{

int i , j  ,  k , alias , alias2 ;
i = 48 ;
while (i <= 55)
{   
     j = i+1 ;
    while ( j <= 56)
    {
          k = j+1 ;
         while (k <= 57)
         {

          if (j == k)
          {
            k++; 
          }
          
           putchar(i) ;
           putchar(j) ; 
           putchar(k) ; 

           if (i != 55)
           {
           putchar(',') ; 
           putchar(' ') ; 
           }   
           k++;
         }
         j++ ;   
    }
   i++; 
   
}
   putchar('\n') ;
  return (0) ;
 } 