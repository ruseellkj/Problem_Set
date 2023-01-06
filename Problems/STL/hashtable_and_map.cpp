#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;

int main()
{

    // The implementation of HASH TABLE on C++ is "unordered_map<>" and the implementation of map on C++ is "map<>".
    // the main  difference between hash table and map is

    // In unordered_map<> keys are not sorted and insertion of particular key takes O(1).
    // In map<> keys are in sorted order and the insertion of particular key will take O(logn).

    // // This means that if you need keys to be in sorted order then it is better to use map<>, otherwise use    unordered_map<>.

    // unordered_map<int, int> q;
    // unordered_map<int,vector<int>> q;
    // unordered_map<int,vector<vector<string>>> q;
    // unordered_map<char,pair<int,char>> q;
    // unordered_map<string,int> q;

    // 1st way
    // q[3] = 7;
    // cout << q[3] << endl;

    // inserting a key value pair in unordered_map
    // 1st way
    // q.insert(make_pair(3,7));
    // or
    // q.insert({3,7});

    // 2nd way
    // q[3] = 7;

    // 3rd way
    // q.emplace(3,7);

    // here value gets over-written
    // q[3] = 10;
    // cout << q[3] << endl;

    //  If you want to save the values by one key then you can do in following way:

    // unordered_map<int, vector<int>> q1;
    // q1[3].push_back(7);
    // q1[3].push_back(10);

    // // Let's look how you can check does the particular key exists or not:
    // unordered_map<int, int> q;
    // int ourkey = 7;

    // // 1st way
    // q.count(ourkey) > 0;

    // // 2nd way
    // // make an interator
    unordered_map<int, int>::iterator z;
    // z = q.find(ourkey);
    // if (z == q.end())
    // {
    //     cout << "This key does not exists" << endl;
    // }
    // else
    // {
    //     cout << z->first << " " << z->second << endl;
    // }

    // and if you want to delete and remove that key with its value from q you can use:

    // 1st way:
    // q.erase(ourkey); // deletion by key

    // 2nd way:
    // q.erase(z); // deletion by iterator

    // The next thing how to traverse unordered_map<> :

    unordered_map<int, int> q;
    for (int i = 1; i <= 3; i++)
    {
        q[i] = i + 1;     // construct pairs, I mean key-value combinations
    }
    // unordered_map<int, int>::iterator z;

    for (auto z = q.begin(); z != q.end(); z++)
    { // traversing from beginning till end
        cout << "key is " << z->first << " and the value is " << z->second << endl;
    }

    // for (auto z = q.rbegin(); z != q.rend(); z++)
    // { // traversing from end till beginning cant be done in unordered_map
    //     cout << "key is " << z->first << " and the value is " << z->second << endl;
    // }
}