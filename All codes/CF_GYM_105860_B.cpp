#include <bits/stdc++.h>
using namespace std;
#define ll long long


#define pb push_back
#define all(v) v.begin(), v.end()
#define cy cout << "YES\n"
#define cn cout << "NO\n"
#define fl(s,e) for(int i=s;i<e;i++)




void solve() {
    vector<ll> v;
    ll x = 4,m;
    while(x--){
        cin >>  m;
        v.push_back(m);
    }
    sort(all(v));
    ll ans = (v[0]*v[1])+(v[2]*v[3]);
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