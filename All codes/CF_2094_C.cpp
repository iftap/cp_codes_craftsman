#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n; cin >> n;
    ll v[n][n];
    vector<ll> sm(2*n +1),ans;
    for(ll i=0;i<n;i++){
        for(ll j=0;j<n;j++){
            cin >> v[i][j];
        }
    }  
    for(ll i=0;i<n-1;i++) {
        ans.push_back(v[0][i]);
        sm[v[0][i]]++;
    }
    for(ll i=0;i<n;i++) {
        ans.push_back(v[n-1][i]);
        sm[v[n-1][i]]++;
    }
    ll fi;
    for(ll i=1;i<= 2*n;i++){
        if(sm[i]==0){
            fi = i;
            break;
        }
    }
    cout << fi << " ";
    for(auto u : ans) cout << u << " ";
    cout << endl;
    }


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll t; 
    cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}