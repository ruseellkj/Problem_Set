// C program to sort an array in Zig-Zag form
#include <stdbool.h>
#include <stdio.h>
 
// This function swaps values pointed by xp and yp
void swap(int* xp, int* yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
 
// Program for zig-zag conversion of array
void zigZag(int arr[], int n)
{
    // Flag true indicates relation "<" is expected,
    // else ">" is expected. The first expected relation
    // is "<"
    bool flag = true;
 
    for (int i = 0; i <= n - 2; i++) {
        if (flag) /* "<" relation expected */
        {
            /* If we have a situation like A > B > C,
            we get A > C < B by swapping B and C */
            if (arr[i] > arr[i + 1])
                swap(&arr[i], &arr[i + 1]);
        }
        else /* ">" relation expected */
        {
            /* If we have a situation like A < B < C,
            we get A < C > B by swapping B and C */
            if (arr[i] < arr[i + 1])
                swap(&arr[i], &arr[i + 1]);
        }
        flag = !flag; /* flip flag */
    }
}
 
// Driver program
int main()
{
    int arr[] = { 4, 3, 7, 8, 6, 2, 1 };
    int n = sizeof(arr) / sizeof(arr[0]);
    zigZag(arr, n);
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}