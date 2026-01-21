#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define cy cout << "YES\n"
#define cn cout << "NO\n"
#define fl(s,e) for(int i=s;i<e;i++)
#define vll vector<ll>

ll lcm(ll a,ll b){
    return a / __gcd(a,b) * b;
}

void ottarmarebap(){
    ll n;
    cin >> n;
    vll v(n), aa;
    fl(0,n) cin >> v[i];

    fl(1,n){
        if(v[i] % v[i-1]){
            ll t =v[i-1]/ __gcd(v[i], v[i-1]);
            if(t>0)aa.pb(t);
        }
    }

    ll ans = (aa.size() > 0) ? aa[0] : 1;
    fl(1, aa.size()) {
        ans = lcm(ans, aa[i]);
    }

    cout << ans << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t = 1;
    cin >> t;
    while (t--) {
        ottarmarebap();
    }

    return 0;
}
