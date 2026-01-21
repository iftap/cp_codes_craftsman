#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n,maxi = INT_MIN,mini= INT_MAX;
    cin >> n;
    n--;

    ll x;
    cin >> x;
    ll ans = x;
    while(n--){
        cin >> x;
        ans&=x;
    }
   
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
