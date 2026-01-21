#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll a; cin >> a;
    vector<ll> v(a);
    for(int i=0;i<a;i++) cin >> v[i];
    sort(v.begin(),v.end());
    ll ans = v[a-1]-v[0];
    cout << ans << endl;
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
