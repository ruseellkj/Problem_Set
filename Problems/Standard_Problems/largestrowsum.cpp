#include <bits/stdc++.h>
#include <limits.h>
using namespace std;

int largestRowSum(int a[][3], int i, int j)
{
    int max = INT_MIN;
    int rowIndex = -1;

    for(i=0; i<3; i++)
    {
        int sr=0;
        for(j=0; j<3; j++)
        {
            sr = sr + a[i][j];
        }

        if (sr > max)
        {
            max = sr;
            rowIndex = i;
        }
    }
    cout << "the maximum sum is " << max << endl;
    return rowIndex;
}

int main()
{
    int a[3][3], i,j;
    cout << "Enter the elements" << endl;
    // reading the data
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            cin >> a[i][j];
        }
    }
    cout << endl;
    // for printing the matrix
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    int ansIndex = largestRowSum(a,3,3);
    cout << "the maximum index of row is " << ansIndex << endl;
    return 0;

}


