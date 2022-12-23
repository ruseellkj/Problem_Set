// #WAP to perform pointer arithmetic (inc\decre)

#include <stdio.h>

int
main ()
{
  int a[5] = { 3, 2, 67, 0, 56 };
  int *p;
  p = &a[2];

  printf ("%d\n %d\n %d\n", *(--p), *(--p), *(--p));
  printf ("%d\n %d\n %d\n", --(*p), (*p)++, ++(*p));
}
