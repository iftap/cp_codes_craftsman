#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    
    ll n,x; cin >> n;
    vector<pair<ll,ll>> p;
    vector<ll>v;
    ll mini = INT_MAX,maxi=0;
    maxi = mini;
    for(ll i=0;i<n;i++){
        ll a; cin >> a;
        for(ll j=0;j<a;j++){
            cin >> x;
            v.push_back(x);
        }
        sort(v.begin(),v.end());
        if (v.size() >= 2) p.push_back({v[0],v[1]});
        mini = min(mini,v[0]);
        maxi = min(maxi,v[1]);
        v.clear();
    }

    ll sum =0;
    for(auto u : p){
      // if(u.first== mini) sum+= mini;
       //else 
       sum+= u.second;
    }
    sum+= mini;
    sum-= maxi;


    cout << sum << endl;




    


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
