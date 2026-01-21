#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n; cin >> n;
    string s; cin >> s;
    map<char,ll>m1,m2;
    vector<ll> a(n),b(n);
   
    for(ll i =0;i<n;i++){
        m1[s[i]]++;
        m2[s[n-i-1]]++;
        b[n-i-1]=m2.size();
        a[i] = m1.size();
        
    }
    ll ans = 1;
    for(ll i=0;i<n-1;i++) ans= max(ans,a[i]+b[i+1]);
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
