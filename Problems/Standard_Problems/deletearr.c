#include <stdio.h>

int main()
{
    int a[10], i, pos;
    printf("enter the elements of the array : \n");

    // To read the elements of the array
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("enter the position of the element that you want to delete from the array : \n");
    scanf("%d", &pos);

    // check whether the deletion is possible or not
    if (pos >= 11)
    {
        printf("deletion is not possible \n");
    }

    else
    {

        for (i = pos - 1; i < 10; i++)
        {
            a[i] = a[i + 1];
        }
    }
    printf(" \n The resultant array is: \n");

    // display the final array
    for (i = 0; i < 9; i++)
    {
        printf("%d\t", a[i]);
    }

    return 0;
}