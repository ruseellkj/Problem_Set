#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[3][4],i,j;

    cout << "enter the elements of the array " << endl;
    // taking in the elements of the array 
    for(i=0; i<3; i++)
    {
        for(j=0; j<4; j++)
        {
            cin >> arr[i][j];

        }
    }
    cout << endl;
    // making the logic of the program 
    for(j=0; j<4; j++)
    {
        if(j&1)
        {
            // odd index -> bottom to top 
            for(i=3-1; i>=0; i--)
            {
                cout << arr[i][j] << " ";

            }
            // cout << endl;

        }
        else
        {
            // even index -> top to bottom 
            for(i=0; i<3; i++)
            {
                cout << arr[i][j] << " ";

            }

        }
        // cout << endl; 
    }

// return 0;
}