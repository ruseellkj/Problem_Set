// WAP to find the sum of individual rows ans columns

#include <stdio.h>
int main()
{
    int a[3][3], i, j ,sr=0, sc=0;
    printf("enter the elements of the array : \n");
    
    // for reading the data
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d", &a[i][j]);
        }
        
    }
    printf("\n");

    printf("the sum of the individual row and column is : \n");
    // for printing the output
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            sr = sr + a[i][j];
            sc = sc + a[j][i];
        }
        printf("\n");
        printf("sr is %d and sc is %d", sr , sc);
    }
}