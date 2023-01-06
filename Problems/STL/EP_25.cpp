#include <bits/stdc++.h>
using namespace std;
#define nline endl;

void printmap(map<int,string> mp){
    cout << "size: " << mp.size() << endl;
    for(auto &pr : mp){
        cout << pr.first << " " << pr.second << endl; 
    }
}
int main(){
    // in  map the keys are in sorted order and no duplicate entries are allowed
    map<int,string> mp;
    mp[1] = "abc"; //o(log(n)) time complexity 
    mp[3] = "rushil";
    mp[5] = "jari";
    mp.insert({4, "kalpesh"});
    auto it = mp.find(7);
    if(it != mp.end()) // o(log(n))
        mp.erase(it);

    // if(it == mp.end()){
    //     cout << "no value" << nline;
    // }
    // else{
    //     cout << (it->first) << " " << (it->second) << nline;
    // }
    printmap(mp);
}