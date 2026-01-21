#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n,k,q; cin >> n>> k >> q;
    vector<ll> v;
    ll c=0,x;
    for(ll i=0;i<n;i++){
        cin >> x;
        if(x>q){
            if(c>=k)v.push_back(c);
            c=0;
        } 
        else c++;
    }
    if(c>=k) v.push_back(c);
    ll ans =0,temp =0;
    for(auto u : v){
       temp = u -k +1;
       temp = (temp*(temp+1)/2);
       ans+= temp;
    }

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
