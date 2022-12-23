#include <stdio.h>

int main()
{
    int a[3][3], i,j;
    printf("enter the elements of the array  : \n");
    
    // for reading the data
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    
    
    // printing the normal matrix 
    printf("The Matrix is : \n");
    
    for (i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d\t", a[i][j]);
        }
    printf("\n");    
    }
    printf("\n");  
    
    // printing the Transpose of the original matrix
    printf("The Transpose of the matrix is : \n");
    for (i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d\t", a[j][i]);
        }
    printf("\n");
    }
}