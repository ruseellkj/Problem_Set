// WAP to find the multiplication of two arrays

#include <stdio.h>
#define N 50
int main()
{
    int a[N][N], b[N][N], c[N][N], i, j, k, m, n, p, q, sum;
    printf("enter the rows and columns for matrix a : \n");
    scanf("%d %d", &m, &n);
    
    // for reading the values of matrix a
    printf("enter the first matrix; \n");
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("\n");
    
    printf("enter the rows and columns of matrix b : \n");
    scanf("%d %d", &p, &q);
    
    // for reading the values of matrix b
    printf("enter the second matrix: \n");
    for(i=0; i<p; i++)
    {
        for(j=0; j<q; j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("\n");
    
    
    // for printing first matrix
    printf("the first matrix is : \n");
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    
    // for printing second matrix
    printf("the second matrix is : \n");
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }
    
    
    if(n!=p)
    {
        printf("multiplication is not possible\n");
    }
    else
    {
        for(i=0; i<m; i++)
        {
            for(j=0; j<q; j++)
            {
                sum = 0;
                for(k=0; k<m; k++)
                {
                    sum = sum + (a[i][k]*b[k][j]);
                }
                c[i][j] = sum;
                
            }
        }
    }
    printf("\n");
    
    // for printing the final matrix
    printf("The final multiplied matrix is : \n");
    for(i=0; i<m; i++)
    {
        for(j=0; j<q; j++)
        {
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }
        
        
    
}