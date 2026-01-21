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


void ottarmarebap(){
    ll n,k; cin >> n >> k;
    vll v,a(n);
    fl(0,n) cin >> a[i];
    v.pb(0);
    fl(1,n){
        if((2*a[i])>a[i-1] ) continue;
        v.pb(i);
    }
    ll ans=0;
    v.pb(n);
    for(ll i=1;i<v.size();i++){
        if(v[i]-v[i-1] >=k) ans+= ((v[i]-v[i-1])-k );
    }
    cout << ans << endl;

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll t=1; 
    cin >> t;
    while (t--) {
        ottarmarebap();
    }

    return 0;
}