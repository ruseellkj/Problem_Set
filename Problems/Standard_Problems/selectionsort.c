// #WAP to implement Selection sort 

#include <stdio.h>

int main()
{
    int a[50], i, j,n;
    
    printf("enter the size of the array\n");
    scanf("%d", &n);
    
    printf("enter the elements of the array\n");
    
    // for reading the elements of the array
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\n");
    
    // making the logic
    for(i=0; i<n-1; i++)
    {
        int min = i;
        for(j=i+1; j<n; j++)
        {
            if(a[j]<a[min])
            {
                min = j;
            }
        }
        if(min!=i)
        {
            int temp;
            temp = a[i];
            a[i] = a[min];
            a[min] = temp;
        }
    }
    
    printf("The sorted array is :\n");
    printf("\n");
    
    // for printing the array
    for(i=0; i<n; i++)
    {
        printf("%d\t", a[i]);
    }
    
    
}