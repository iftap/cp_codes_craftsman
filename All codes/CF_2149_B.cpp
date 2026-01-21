#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define cy cout << "YES\n"
#define cn cout << "NO\n"
#define fl(s,e) for(int i=s;i<e;i++)
#define vll vector<ll>
#include<numeric>
#define sz size()

void ottarmarebap(){
    ll n ; cin >> n ;
    vll v(n);
    fl(0,n) cin >> v[i];
    sort(all(v));
    ll ans=0;
    for(ll i=0;i<n;i+=2)ans=max(ans,v[i+1]-v[i]);
// 1 3 
    cout << ans << endl;
    
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll t=1; 
    cin >> t;
    while (t--) {
        ottarmarebap();
    }

    return 0;
}

