// unordered_map STL
// 4P74h7Vhec

#include <bits/stdc++.h>
using namespace std;

int main(){
    unordered_map<string,int> mp;
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        string s;
        cin >> s;
        // calculating the frequency of the string 
        // mp[s] = mp[s] +1;
        mp[s]++;
    }
    int q;
    cin  >> q;
    while(q--){
        string s;
        cin  >> s;
        cout << mp[s] << endl;
    }
    cout << endl;
    
    for(auto &pr : mp){
        cout << pr.first << " " << pr.second << endl;
    }
}