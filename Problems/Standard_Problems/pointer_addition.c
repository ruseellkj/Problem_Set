// #WAP to perform pointer arithmetic operation ( addition)

#include <stdio.h>

int
main ()
{
  int a[5] = { 1, 2, 3, 4, 5 };
  int *p = &a[0];
  printf ("the value is %d\n", *p);
  printf ("the address is %u\n", p);
  p = p + 2;
  printf ("the value is %d\n", *p);
  printf ("the address is %u\n", p);
}
