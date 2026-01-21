#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n;
    cin >> n;
    ll temp =0,ans=0;
    ans = n/2;
    if(n&1){
        ans++;
        ans*=(-1);
    }
    cout << ans << endl;
        
    }


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll t; 
    //cin >> t;
    // (t--) {
        solve();
    //}

    return 0;
}