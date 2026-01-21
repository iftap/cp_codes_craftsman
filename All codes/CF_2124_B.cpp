#include <bits/stdc++.h>
#include<numeric>
using namespace std;
#define ll long long
#define c00 cout << "-1\n"
#define vll vector<ll> 
#define fl(s,e) for(ll i = s; i < e; i++)

void solve() {
    ll n; 
    cin >> n;
    vll v(n),pf(n+1),ps(n+1); 
    fl(0,n) cin >> v[i];
    ll ans =0;
    ll gg=0;
    fl(1,n){
        if(gg!=1 && v[i]%v[i-1]!=0){
            ans =((v[i]*v[i-1])/__gcd(v[i],v[i-1]))/v[i-1];
            v[i]*=ans;
            gg=1;continue;
        }
        if(v[i]%v[i-1]!=0){
            if((ans*v[i])%v[i-1]==0) {
                v[i]*=ans;
                continue;
            }
            else {
                ans = ans*((v[i]*v[i-1])/__gcd(v[i],v[i-1]))/v[i-1];
                v[i]*=ans;
                continue;
            }
        }
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
