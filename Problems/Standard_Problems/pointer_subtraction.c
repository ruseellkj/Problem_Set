// #WAP to perform pointer arithmetic operation ( subtraction)


#include <stdio.h>

int
main ()
{
  int d;
  int a[5] = { 50, 1, -1, 10, 11 };
  int *p = &a[0];
  int *q = &a[3];
  d = p - q;
  *q = 25;
  d = q - p;
  *p = 27;
  q = q - 3;
  p = p + 3;
  d = p - q;
  printf ("value of d is %d\n", d);
  printf ("value of p %d\n", *p);
  printf ("value of q %d\n", *q);
  printf ("address of p is %u\n", p);
  printf ("address of q is %u\n", q);
  return 0;
}
