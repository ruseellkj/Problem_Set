#include <bits/stdc++.h>
using namespace std;

int firstOcc(int arr[], int n, int x)
{
    int l = 0;
    int r = n - 1;
    int ans = -1;

    while (l <= r)
    {
        int mid = l + (r - l) / 2;

        if (arr[mid] == x)
        {
            ans = mid; 
            r = mid - 1;
        }
        else if (arr[mid] > x)
        {
            r = mid - 1;
        }
        else{
            l = mid + 1;
        }

        mid = l+(r-l)/2;
    }
    return ans;
}

int lastOcc(int arr[], int n, int x)
{
    int l = 0;
    int r = n - 1;
    int ans = -1;

    while (l <= r)
    {
        int mid = l + (r - l) / 2;

        if (arr[mid] == x)
        {
            ans = mid; 
            l = mid + 1;
        }
        else if (arr[mid] > x)
        {
            r = mid - 1;
        }
        else{
            l = mid + 1;
        }

        mid = l+(r-l)/2;
    }
    return ans;
}

int totalOcc(int arr[], int n , int x)
{

    int last = lastOcc(arr, 9, 4);
    int first = firstOcc(arr, 9,4);
    if( first == -1 && last == -1)
    {
        cout << "cant find the total occurrences of the element" <<  endl;
    }
    else
    {
        int total = (last - first) + 1;

    }
    // return totalOcc;
    // cout << totalOcc << endl;
    // return 0;
    // return 0;
}

int main()
{
    int arr[10] = {-3, 2, 1, 3, 4, 4, 4, 4, 5};

    cout << "The first occurrence of the element 4 is at index " << firstOcc(arr, 9, 4) << endl;
    cout << "The last occurrence of the element 4 is at index " << lastOcc(arr, 9, 4) << endl;
    cout << "The total number of occurrences of element 4 is " << totalOcc(arr,9,4) << endl;
    // cout << totalOcc(arr, 9,4);
}
