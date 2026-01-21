#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define cy cout << "YES\n"
#define cn cout << "NO\n"
#define fl(s,e) for(int i=s;i<e;i++)
void chk(ll n){
    
}







void solve(){
    ll n,k,anss=0; cin >> n >> k;
    vector<ll> v(n),prf(n+1);
    fl(0,n)    cin >> v[i];
    ll l=0,h=n-1;
    sort(all(v));
    
    fl(0,n)   prf[i+1]= v[i]+prf[i];
    
    for (ll i = 0; i <= k; i++) {
        if (2*(k-i)<=n-i) { 
            ll sum = prf[n-i]-prf[2*(k-i)];
            anss = max(anss, sum);
        }
    }
    


    cout << anss << endl;
    
}
  
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll t=1; 
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}