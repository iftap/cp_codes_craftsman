#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n; cin >> n;
    ll x,cn0=0,cn1=0,j=n;
    while(j--){
        cin >> x;
        if(x==0) cn0++;
        if(x==1)cn1++;
    }
    ll ans = 1;
    
    if(cn1) {
        ans*= cn1;
        if(cn0) ans*=pow(2,cn0);
    }
    else ans =0;
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
