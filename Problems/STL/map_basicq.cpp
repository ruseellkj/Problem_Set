#include <bits/stdc++.h>
using namespace std;


// Given N strings , print the unique strings in lexiographically order with the frequency
// N <= 10^5
// |s| <= 100

int main(){
    map<string,int> mp;
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        string s;
        cin >> s;
        // calculating the frequency of the string 
        // mp[s] = mp[s] +1;
        mp[s]++;
    }
    cout << endl;
    
    for(auto &pr : mp){
        cout << pr.first << " " << pr.second << endl;
    }
}