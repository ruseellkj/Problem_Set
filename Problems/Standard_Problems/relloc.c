#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,*ptr;
    printf("enter the value of n: \n");
    scanf("%d", &n);
    ptr = (int *)calloc(n, sizeof(int));

    printf("enter the values: \n");
    for(i=0; i<n; i++)
    {
        scanf("%d", (ptr+i));
    }
    printf("entered values are: \n");
    for(i=0; i<n; i++)
    {
        printf("%d\t",*(ptr+i));
    }
    printf("\n");
    // now rellocating the memory
    printf("enter the new value of n: \n");
    scanf("%d", &n);
    int *ptr1;
    ptr1 = (int *)realloc(ptr, n * sizeof(int));
    printf("enter the new values: \n");
    for(i=0; i<n; i++)
    {
        scanf("%d", (ptr1+i));
    }
    printf("\n");
    printf("previous address is: %d and new address is: %d", ptr, ptr1);
    printf("\n");

    // printing the new values
    for(i=0; i<n; i++)
    {
        printf("%d\t", *(ptr1+i));
    }
    free(ptr1);

}