// #WAP to implement the Bubble sort
#include <stdio.h>

int main()
{
    int a[30], n, i, j;
    printf("enter the size of the array : \n");
    scanf("%d", &n);

    printf("enter the elements of the array : \n");

    // for reading the values of array
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    // making the logic
    for (i = 0; i < n - 1; i++)
    {
        int flag = 0;
        for (j = 0; j < n - 1 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                // for swapping the elements
                int temp;
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
                flag = 1;
            }
        }
        if(flag == 0)
        break;
    }

    printf("The Sorted array is : ");
    printf("\n");
    
    // for printing the array
    for (i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
        
}