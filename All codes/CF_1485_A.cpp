#include <bits/stdc++.h>
using namespace std;
#define ll long long


void solve() {
    ll a ,b; cin >> a >> b;
    ll ans =31;
    
    for(ll i=b;i<(b+31);i++){
        if(i==1) continue;
        ll temp =a,cn=0;
        while(temp>0){
            temp/=i;
            cn++;
        }
        cn+= (i-b);
        ans=min(ans,cn);
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