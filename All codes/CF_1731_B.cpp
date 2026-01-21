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
    ll n ,ansi=1; cin >> n;
    ll k = 1e9+7;
    //ans=  337 * n(n+1)* (4n-1)
    ansi = ( ((n*(n+1))%k*(4*n-1))%k  *337 )%k;
    
    cout << ansi << endl;
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