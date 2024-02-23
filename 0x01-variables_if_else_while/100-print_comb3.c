#include <stdio.h>

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
}
