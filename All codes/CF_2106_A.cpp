#include <bits/stdc++.h>
using namespace std;
#define ll long long


#define pb push_back
#define all(v) v.begin(), v.end()
#define cy cout << "YES\n"
#define cn cout << "NO\n"
#define fl(s,e) for(int i=s;i<e;i++)




void solve() {
    ll n ; cin  >> n; 
    char x;
    string s; cin >> s;
    ll ans =0,kc=n;
    fl(0,n){
       // cin >> x; 
        if(s[i]=='1') ans++;
    }
    ans = ((ans-1)*ans)+((n-ans)*(ans+1));
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