#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define cy cout << "YES\n"
#define cn cout << "NO\n"
#define fl(s,e) for(int i=s;i<e;i++)


void ottarmarebap(){
    ll x,z=0,ans=0,n,m; cin >> n >> m;
    vector<ll> v;
    vector<pair<ll,ll>> pl;
    fl(0,n){
        ll sm=0;
        for(ll j=0;j<m;j++){
            cin >> x;
            sm+=x;
            z+= x*(m-j);
        }
        pl.pb({sm,z});
        z=0;
    }
    sort(all(pl));
    for(ll i= n-1;i>=0;i--){
        ans+= pl[i].first*i*m;
        ans+= pl[i].second ; 
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