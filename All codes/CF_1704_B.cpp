#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n,x; cin >> n >> x;
    
    vector<ll> v(n); cin >> v[0];
    ll l=v[0],h=v[0],cnt=0;
    for(ll i =1;i<n;i++){
        cin >> v[i];
        l = min(v[i],l);
        h = max(v[i],h);
        if((h-l)>2*x){
            cnt++;
            l=v[i];
            h=v[i];
        }
    }
    cout << cnt << endl;
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
