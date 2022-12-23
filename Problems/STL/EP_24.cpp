#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {2, 3, 4, 6, 5, 7};
    // using range based loops
    for (int value : v)
    {
        // value++;
        cout << value << " ";
    }
    cout << endl;

    vector<pair<int, int>> v_p = {{1, 2}, {2, 3}, {3, 4}};
    // using range based loops in pairs
    for (pair<int, int> value : v_p)
    {
        cout << value.first << " " << value.second << endl;
    }
    cout << endl;

    // using auto keyword in case of iterator
    // vector<int> v = {2, 3, 4, 5, 6};
    for(auto it = v.begin(); it != v.end(); it++){
        cout << (*it) << " ";
    }
    cout << endl;

    // using auto keyword in case of range-based loops iterating technique
    for(auto value : v){
        cout << value << " ";
    }
    cout << endl;

    for(auto value : v_p){
        cout << value.first << " " << value.second << endl;
    }
    
}

