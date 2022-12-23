#include <stdio.h>

int main()
{
    int a[50], size, i, num, pos;
    printf("enter the size of the array : \n");
    scanf("%d", &size);
    
    // Checking the condition for the size of the array
    if (size >50)
    {
        printf("Its an overflow condition , Sorry you can not insert into the array : \n");
    }
    else
    {
        printf("enter the elements of the array : \n");
        
        // for reading the elements of the array
        for(i=0; i<size; i++)
        {
            scanf("%d", &a[i]);
        }
        
        printf("enter the number that you want to insert : \n");
        scanf("%d", &num);
        
        printf("enter the position that the number to be inserted : \n");
        scanf("%d", &pos);
        
        printf("\n");
        
        
        // making the logic
        if (pos<=0 || pos>size+1)
        {
            printf("invalid position \n");
        }
        else
        {
            for(i=size-1; i>=pos-1; i--)
            {
                a[i+1] = a[i];
            }
            a[pos-1] = num;
            size++;
        }
        
        // for printing the inserted array
        for(i=0; i<size; i++)
        {
            printf("%d\t", a[i]);
        }
        printf("\n");
    }
}