#include <stdio.h>

/*
exercice : The last digit 
assign  a random degit then : 
The output of the program should be:
The string Last digit of, followed by
n, followed by
the string is, followed by
if the last digit of n is greater than 5: the string and is greater than 5
if the last digit of n is 0: the string and is 0
if the last digit of n is less than 6 and not 0: the string and is less than 6 and not 0
followed by a new line

*/

int main()
{
  
long  n ;
int  last_digit ;
n = 491506926 ;
last_digit = n % 10 ;


if (last_digit > 5) 
{
    printf("the last digit of %ld is %d and is greater than 5\n",n,last_digit) ;
}

if (last_digit == 0) 
{
    printf("the last digit of %ld is %d and is 0 \n",n,last_digit) ;
}

if (last_digit < 6 && last_digit != 0 )
{
  printf("the last digit of %ld is %d ans is less than 6 and not 0\n",n,last_digit) ;
}

 return (0) ;
}