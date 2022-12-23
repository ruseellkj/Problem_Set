// WAP to print the 2D array and calculate the sum of the array

#include <stdio.h>
int main()
{
    int a[2][3], i, j, sum=0;
    printf("enter the elements that you want to enter : \n");
    // for reading the data
    for (i=0; i<2; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    
    printf("\n");
    
    // for printing the data
    printf("The Matrix is : \n");
    
    for(i=0; i<2; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d\t", a[i][j]);
            sum = sum + a[i][j];
        }
        
        printf("\n");
    }
    
    printf("The sum of the array is : %d\n", sum);
    
    return 0; 
}