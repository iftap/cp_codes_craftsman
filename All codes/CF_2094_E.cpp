#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
        ll n; cin >> n;
        vector<ll> v(n),bt(30);
        for(ll i=0;i<n;i++){
            cin >> v[i];
            for(ll j=0;j<30;j++){
                if(v[i]& (1<<j)) bt[j]++;
            }
        }
        ll mx =0,temp;
        for(ll i=0;i<n;i++){
            temp =0;
            for(ll j=0;j<30;j++){
                if(v[i]& (1<<j)) temp += (n-bt[j])* (1<<j);
                else temp+= bt[j]*(1<<j);
            }
            mx= max(mx,temp);
        }
        cout << mx << endl;

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