#include <bits/stdc++.h>
using namespace std;
#define ll long long

#include <iostream>
using namespace std;

ll pw( ll n){
    while(n%2==0) n/=2;
    return n;
}



void solve() {
    ll a,b;cin >> a >> b;
    ll x =pw(a),y=pw(b);
    if(a==b){
        cout << "0\n";
        return;
    }
    if(x!=y){
        cout << "-1\n";
        return;
    }
    if(a<b) swap(a,b); 
    a/=b;
    ll ans =0;
    while(a>=8){
        a/=8;
        ans++;
    }
    if(a>1) ans++;
    
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