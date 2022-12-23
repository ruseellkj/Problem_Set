#include <stdio.h>
#include <string.h>


int
main ()
{
  int count = 0, i = 0;
  char name[30];

  // // To read and print the string 
  // printf("enter the name:\n");
  // gets(name);

  // // To find the length of the string
  // count = strlen(name);
  // printf("The length of the string is: %d", count);


  // By not using the in-built function (strlen)

  printf ("enter the name: \n");
  gets (name);

  while (name[i] != '\0')
    {
      count++;
      i++;
    }
  printf ("The length of the string is %d", count);
}
