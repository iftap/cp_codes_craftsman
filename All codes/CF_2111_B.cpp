#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define cy cout << "YES\n"
#define cn cout << "NO\n"
#define fl(s,e) for(int i=s;i<e;i++)
void chk(ll n){
    
}

ll fib[11]= {0,1,2,3,5,8,13,21,34,55,89};

void solve(){
    ll n,m; cin >>n >> m;
    vector<ll> h(m),w(m),l(m);
    fl(0,m) cin >> h[i] >> w[i] >> l[i];
    fl(0,m){
        ll maxi = max(h[i],w[i]);
        maxi = max(maxi,l[i]);
        if(h[i] >= fib[n] && w[i]>=fib[n] && l[i]>= fib[n] && maxi >=fib[n]+fib[n-1]) cout <<"1";
        else cout <<"0";
    }
    cout << endl;
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