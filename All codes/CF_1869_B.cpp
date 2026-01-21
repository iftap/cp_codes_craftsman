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




    void solve() {
        ll x,y,n,k , a, b; cin >> n>> k >> a >>b;
        vector<pair<ll,ll>>v;
        fl(0,n){
            cin >> x >> y;
            v.pb({x,y});
        }
        ll lef=(abs(v[b-1].first-v[a-1].first)+abs(v[b-1].second-v[a-1].second)),temp;
        ll rig=lef;
        ll ans = lef;
        fl(0,k){
            temp= abs(v[i].first-v[a-1].first)+abs(v[i].second-v[a-1].second);
            lef= min(lef,temp);
            temp= abs(v[i].first-v[b-1].first)+abs(v[i].second-v[b-1].second);
            rig= min(rig,temp);
        }
        ans = min (ans,lef+rig);
        cout << ans << endl;
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