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
    ll n,x,z,cnt=0,temp=0; cin >> n >> x;
    vector<ll>v(3*n);
    fl(0,3*n) cin >> v[i];
    fl(0,3*n){
        if((x|v[i]) != x) break;
        temp|=v[i];
    }
    if(temp==x) cy;
    else cn;
    
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