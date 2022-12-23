#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ch = 1;
    int *ptr;
    while(ch<50)
    {
        printf("memory leak");
        ptr  = (int *)malloc(4000 * sizeof(int));

         printf("continue?? Then press 1 ");
         scanf("%d", &ch);
        //  free(ptr);
    }
}