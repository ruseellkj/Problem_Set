#include <bits/stdc++.h>
using namespace std;

void printvec(vector<int> v)
{
    cout << "size: " << v.size() << endl;
    for (int i = 0; i < v.size(); ++i)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

// array of vectors
int main()
{
    int N;
    cin >> N;
    vector<int> v[N];
    for (int i = 0; i < N; ++i)
    {
        int n;
        cin >> n;
        for (int j = 0; j < n; ++j)
        {
            int x;
            cin >> x;
            v[i].push_back(x);
        }
      
    }
    // v.push_back(temp);s

    for (int i = 0; i < N; ++i)
    {
        printvec(v[i]);
    }
}

// for vectors of vectors , just imagine by having variable row and variable coloumn 
// in array of vectors , no of rows is fixed but no of columns is not fixed 

