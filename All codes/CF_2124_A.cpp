#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define c00 cout << "-1\n"
#define vll vector<ll> 
#define fl(s,e) for( ll i =s;i<e;i++)

void solve() {
    ll n; cin >> n ; 
    vll v(n);
    fl(0,n) cin >> v[i];
    
    ll a=0,b=0;
    fl(0,n){
        for(ll j=i+1;j<n;j++){
            if(v[i]>v[j]){
                a=i;
                b=j;
                cout <<"YES\n";
                cout <<"2\n"<< v[i]<<" "<< v[j]<< endl;
                return;
            }
        }
        
    }
cout << "NO\n";
    
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
