#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    
    ll n,p; cin >> n >> p;
    vector<pair<ll,ll>> pa;
    ll x,y;
    for(ll i =0;i<n;i++){
        cin  >> x >> y;
        if(y<p) pa.push_back({x,y});
    }
    //sort(pa.begin(),pa.end());

    sort(pa.begin(), pa.end(), [](pair<ll, ll> a, pair<ll, ll> b) {
        if (a.first == b.first) 
            return a.second > b.second; // Sort second value in descending order
        return a.first < b.first; // Sort first value in ascending order
    });
    ll cost =p,cn = n-1;
    for(auto u  : pa){
    //
    }


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
