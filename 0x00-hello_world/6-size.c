#include <stdio.h>
// program that desplay the size of some data types with using sizeof operator 

int main ()
{
  printf("size of a char : %lu byte(s)\n",sizeof(char));
  printf("size of an int : %lu byte(s)\n",sizeof(int));
  printf("size of a long : %lu byte(s)\n",sizeof(long));
  printf("size of a long long int : %lu byte(s)\n",sizeof(long long int));
  printf("size of a float : %lu byte(s)\n",sizeof(float));
  return (0);
}
