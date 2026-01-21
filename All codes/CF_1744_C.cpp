#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n; cin >> n;
    char c; cin >> c;
    string s; cin >> s;
    s = s+s;
    ll gpos=0,cpos=0,maxi=0;
    for(ll i=2*n-1 ;i>=0;i--){
        if(s[i]=='g') gpos =i;
        if(s[i]==c){
            maxi = max(maxi,gpos-i);
        }
    }
    cout << maxi << endl;
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
