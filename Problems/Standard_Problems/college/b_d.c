#include <stdio.h>
#include <stdlib.h>
#include "header.h"
int main(int argc, char* argv[]) {
   if(argc==2){
       printf("The argument supplied is %s.\n", argv[1]);
       long long int x=atoi(argv[1]);
       printf("The decimal number of the given number is %d.\n",bin_dec(x));
   }
   else if(argc>2){
       printf("Too many arguments supplied.\n");
   }
   else{
       printf("One argument expected.\n");
   }
   return 0;
}
