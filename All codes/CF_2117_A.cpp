#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define cy cout << "YES\n"
#define cn cout << "NO\n"
#define fl(s,e) for(int i=s;i<e;i++)

void solve(){
    ll n; 
    cin >> n;
    vector<ll> a(n);
    fl(0,n) cin >> a[i];

    ll diff = a[1] - a[0];
    bool ok = 1;
    for(int i=2; i<n; i++){
        if(a[i] - a[i-1] != diff){
            ok = 0;
            break;
        }
    }

    if(!ok){
        cn;
        return;
    }

    ll B = a[0] - diff;
    ll denom = n + 1;
    if(B < 0 || B % denom != 0){
        cn;
        return;
    }

    ll y = B / denom;
    ll x = y + diff;

    if(x >= 0 && y >= 0) cy;
    else cn;
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
