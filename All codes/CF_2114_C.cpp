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
    ll n,k ; cin >> n >>k;
    ll x,pr=0; 
    bool xi = true;
    fl(0,n){
        cin >> x;
        if((x-pr)>k){
            xi=0;
        }
        pr=x;
    }
    if(xi) cout << "No\n";
    else cout << "Yes\n";

}
  
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll t=1; 
    //cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}