#include <stdio.h>

int main()
{
    int n;
    printf("enter the number of elements in the array : \n");
    scanf("%d", &n);
    
    int a[n], i , min , max;
    // for reading the values of array
    printf("enter the elements of the array : \n");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    
    if (n==1)
    {
        max = a[0];
        min = a[0];
    }
    
    else 
    {
        if (a[0] > a[1])
        {
            max = a[0];
            min = a[1];
        }
        else 
        {
            max = a[1];
            min = a[0];
        }
        
        for(i=2; i<n; i++)
        {
            if(a[i]> max)
            {
                max = a[i];
            }
            if(a[i]< min)
            {
                min = a[i];
            }
        }
    }
    printf("\n");
    
    // for printing the values on screen
    for(i=0; i<n; i++)
    {
        printf("%d\t", a[i]);
    }
    
    printf("\n");
    
    printf("Maximum value of array = %d \n", max);
    printf("Minimum value of array = %d", min);
    
}