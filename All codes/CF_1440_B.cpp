#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    int n,k ; cin >> n >> k;
    vector<ll>  v(n*k +1);
    v[0]=0;
    for(int i=1 ;i<= n*k;i++) cin >> v[i];
    sort(v.begin(),v.end());
    ll ans=0;
    
    ll o = n/2 +1;
    for( ll i = (n*k)-o+1;k>0;i-=o,k--) ans+= v[i];
        
    cout << ans << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--){
    solve();
    }
    return 0;
}
