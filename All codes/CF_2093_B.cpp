#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    string s; cin >> s;
    ll cn =0;
    for(auto u:s) {
        if(u != '0') cn++;
    }
    for(ll i= s.size()-1;i>0;i--){
        if(s[i]== '0') cn++;
        else break;
    }
    cout << cn-1 << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll t; 
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}