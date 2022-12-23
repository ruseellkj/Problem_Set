// under stl
// there are four categories

// 1. contianers
// 2. iterators
// 3. algorithms
// 4. functors

// under containers
// 1. sequential
// -> vectors
// -> stack
// -> queue
// ->pair

// 2. ordered
// -> map
// -> multimap
// ->set
// ->multiset

// 3. unordered
// -> unordered map
// -> unordered set

// *iterators
// these are just like pointers which points to the value stored inside the containers

// *algorithms
// very useful algos which saves the time and no need to write the loops

// *functors
// these are like class which can be used as functions

#include <bits/stdc++.h>
using namespace std;

int main()
{

    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif


    pair<int, string> p;
    // cin >> p.first;  
    // cout << p.second;
    p = make_pair(2, "abcd");
    pair<int, string> &p1 = p;
    p1.first = 3;
    // p = {2,"abcd"};
    cout << p.first << " " << p.second << endl;

    int a[] = {1, 2, 3};
    int b[] = {2, 3, 4};
    pair<int, int> p_array[3];
    p_array[0] = {1, 2};
    p_array[1] = {2, 3};
    p_array[2] = {3, 4};
    swap(p_array[0], p_array[2]);
    for (int i = 0; i < 3; ++i)
    {
        cout << p_array[i].first << " " << p_array[i].second << endl;
    }
}