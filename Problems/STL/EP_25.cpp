#include <bits/stdc++.h>
using namespace std;
void printmap(map<int,string> mp){
    cout << "size: " << mp.size() << endl;
    for(auto &pr : mp){
        cout << pr.first << " " << pr.second << endl; 
    }
}
int main(){
    map<int,string> mp;
    mp[1] = "abc"; //o(log(n)) 
    mp[3] = "rushil";
    mp[5] = "jari";
    mp.insert({4, "kalpesh"});
    printmap(mp);
}