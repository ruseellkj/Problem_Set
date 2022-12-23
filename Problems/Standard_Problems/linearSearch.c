// WAP to demonstrate the linear search by making a for loop method
#include <stdio.h>

int main()
{
    int a[30], i, n;
    int data;

    printf("enter the number of elements of array : \n");
    scanf("%d", &n);
    
    printf("enter the elements of the array : \n");
    // for reading the values of the array 
    
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    
    printf("enter the value of data : \n");
    scanf("%d", &data);
    printf("\n");
    
    // making the logic
    for(i=0; i<n; i++)
    {
        if(a[i]==data)
        {
            printf("found at index %d :", i);
            break;
        }
        if(i==n)
        {
            printf("not found");
        }
    }
    printf("\n");

    // for printing the values
    for(i=0; i<n; i++)
    {
        printf("%d\t", a[i]);
    }
}
