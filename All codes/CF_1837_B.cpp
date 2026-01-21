#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    int x; cin >> x;
    char s[x];
    for(int i=0;i<x;i++) cin >> s[i];

    int maxi =0,count =0;
    for(int i =1;i<x;i++){
        if(s[i]==s[i-1]) count++;
        else count =0;
        maxi = max(count,maxi);
    }

    cout << maxi+2 << endl;
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
