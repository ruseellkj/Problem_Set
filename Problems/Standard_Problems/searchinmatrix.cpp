#include <bits/stdc++.h>
using namespace std;

bool isPresent(int a[][4], int target, int i, int j)
{
    for(i=0; i<3; i++)
    {
        for(j=0; j<4; j++)
        {
            if(a[i][j] == target)
            return 1;
        }
    }
    return 0;
}
int main()
{
    int a[3][4], i,j;
    cout << "Enter the elements" << endl;
    // reading the data
    for(i=0; i<3; i++)
    {
        for(j=0; j<4; j++)
        {
            cin >> a[i][j];
        }
    }

    // for printing the matrix
    for(i=0; i<3; i++)
    {
        for(j=0; j<4; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    cout << "enter the element you want to search" << endl;
    int target;
    cin >> target;

    if(isPresent(a, target, 3, 4))
    {
        cout << "element is found" << endl;
    }
    else
    {
        cout << "element is not found" << endl;
    }

    return 0;
}
