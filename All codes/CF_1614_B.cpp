#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll  x,n; cin >> n;
    vector<ll> v(n+1),k;
    vector<pair<ll,ll>> m(n+1);
    for(ll i=1;i<=n;i++){
        cin>>m[i].first;
		m[i].second = i;
    }
    sort(m.begin()+1,m.end(),greater<pair<ll,ll>>());

    ll ans=0;
    ll ind=1;
    for(ll i=1;i<=n;i++){
        ans+= 2*m[i].first*ind;
        if(i&1) v[m[i].second]=ind;
        else{
            v[m[i].second]=-ind;
            ind++;
        }
    }
    cout << ans << endl;
    v[0]=0;
    for(auto u:v) cout << u << " ";
    cout << endl;


        
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