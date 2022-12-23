#include <bits/stdc++.h>
using namespace std;

// int main()
// {
//     vector<int> v;
//     int n;
//     cin >> n;
//     for (int i = 0; i < n; ++i)
//     {
//         int x;
//         cin >> x;
//         v.push_back(x);
//     }
//     for (int i = 0; i < v.size(); ++i)
//     {
//         cout << v[i] << " ";
//     }
//     cout << endl;

//     vector<int>::iterator it = v.begin();
//     for (it = v.begin(); it != v.end(); ++it)
//     {
//         cout << (*it) << endl;
//     }
// }



// difference between it++ and it+1 
// it++ = next iterator, while it+1 = next location
// in case of vectors there is no difference between it++ and it+1 becoz vector is contiguous 
// next iterator is on next location 
// while in map and set , these are not contiguous so it+1 is invalid 
// instead it++ will take to the next iterator 


// iterator point to pair 
int main(){
    vector<pair<int,int>> v_p = {{1,2}, {2,3}, {3,4}, {4,5}};
    vector<pair<int,int>>:: iterator it;
    for(it = v_p.begin(); it != v_p.end(); ++it){
        cout << (it->first) << " " << (it->second) << endl;
    }

    // or (*it).first <=> (it->first)
    // and (*it).second <=> (it->second)

}