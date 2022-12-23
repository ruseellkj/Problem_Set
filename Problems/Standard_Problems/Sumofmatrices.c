// WAP to get the sum of two matrix 
#include <stdio.h>

int main()
{
    int a[2][3], b[2][3], c[2][3], i , j;
    
    // for reading the data of matrix 1
    printf("enter the elements of matrix a  : \n");
    for(i=0; i<2; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("\n");
    
    // for reading the data of matrix 2
    printf("enter the elements of matrix b  \n");
    for(i=0; i<2; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    
    // for printing the sum of matrix a and matrix b 
    printf("the final matrix is : \n");
    for(i=0; i<2; i++)
    {
        for(j=0; j<3; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }
    
}

