#include <stdio.h>
#include <stdlib.h>
#include "header.h"
int main(int argc, char* argv[]) {
   if(argc==3){
       printf("The arguments supplied are %s & %s.\n", argv[1], argv[2]);
       addition_signed_binary_numbers_U20CS001(argv[1], argv[2]);
   }
   else if(argc>3){
       printf("Too many arguments supplied.\n");
   }
   else{
       printf("Two arguments expected.\n");
   }
   return 0;
}
 
