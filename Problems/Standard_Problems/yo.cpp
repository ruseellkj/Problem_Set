#include <bits/stdc++.h>
using namespace std;



void init_code(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}

int main(){
	init_code();
    int tt;
    cin >> tt;
 
    while(tt--){
        string s;
        cin >> s;
        string s1 = s;
        reverse(s1.begin(),s1.end());
        s = s+s1;
        cout << s << endl;
 
    }
}