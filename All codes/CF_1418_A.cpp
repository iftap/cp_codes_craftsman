#include <bits/stdc++.h>
using namespace std;
#define ll long long


#define pb push_back
#define all(v) v.begin(), v.end()
#define cy cout << "YES\n"
#define cn cout << "NO\n"
#define fl(s,e) for(int i=s;i<e;i++)




void solve() {
    ll a,b,c; cin >>a >> b >> c;
    ll ans = ((c)*b)+(c-1);
    ll temp = ans%(a-1);
    ans/=(a-1);
    if(temp) ans++;
    ans+= c;
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