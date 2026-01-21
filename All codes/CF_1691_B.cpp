#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n; cin >> n;
    vector<ll> v(n);
    for(ll i = 0; i < n; i++) cin >> v[i];
    
    vector<ll> res(n, -1);
    
    ll start = 0;
    while(start < n) {
        ll end = start;
        while(end < n && v[end] == v[start]) end++;
        ll cnt = end - start;
        
        if(cnt == 1) {
            cout << "-1\n";
            return;
        }
        
        for(ll i = start; i < end; i++) {
            if(i == end - 1) res[i] = start;
            else res[i] = i + 1;
        }
        
        start = end;
    }
    
    for(ll i = 0; i < n; i++) {
        cout << res[i] + 1 << " "; // +1 to make it 1-based if needed
    }
    cout << "\n";
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