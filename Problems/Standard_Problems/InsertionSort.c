// #WAP to implement insertion sort 

#include <stdio.h>

int main()
{
    int a[30], i, j, n;
    printf("enter the size of the array : \n");
    scanf("%d", &n);
    printf("\n");
    
    printf("enter the elements of the array : \n");
    
    // for reading the data of array 
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    
    // making the logic
    for(i=1; i<n; i++)
    {
        int temp = a[i];
        j = i-1;
        
        while(j>=0 && a[j]>temp)
        {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = temp;
    }
    
    // for printing the array
    for(i=0; i<n; i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\n");
}