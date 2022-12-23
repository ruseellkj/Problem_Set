#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,*ptr;
    printf("enter the total number of values: ");
    scanf("%d", &n);
    ptr = (int *)malloc(n * sizeof(int));
    printf("enter the values: \n");
    for(i=0; i<n; i++)
    {
        scanf("%d", (ptr+i));
    }
    printf("the entered values are:\n");
    for(i=0; i<n; i++)
    {
        printf("%d\t", *(ptr+i));
    }
    free(ptr);
    
}

