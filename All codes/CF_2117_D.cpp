#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define cy cout << "YES\n"
#define cn cout << "NO\n"
#define fl(s,e) for(int i=s;i<e;i++)








void solve(){
    ll n; cin >> n;
    vector<ll> a(n);
    fl(0,n) cin >> a[i];
    ll df = a[1] - a[0];
    bool gg = 1;
    fl(2,n){
        if(a[i]-a[i-1] != df){
            gg = 0;
            break;
        }
    }
    if(!gg){
        cn;
        return;
    }

    ll z = a[0]-df;
    ll dig = n+1;
    if(z<0 || z%dig != 0){
        cn;
        return;
    }

    ll y = z/dig;
    ll x = y+ df;

    if(x>=0 && y>=0) cy;
    else cn;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll t=1; 
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
