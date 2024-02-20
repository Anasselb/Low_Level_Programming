#include <stdio.h>

/* Write a program that prints all the numbers of base 16 in lowercase, followed by a new line.
   You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
   All your code should be in the main function
   You can only use putchar three times in your code */


int main()
{
 
int i , j ;
i = 48 ;
j = 97 ;

while (i <= 57)
{
  putchar(i);
  i++;
}
while (j < 103)
{
  putchar(j);
  j++;
}
  putchar('\n') ;    
 
return (0) ;

}