#include <bits/stdc++.h>
using namespace std;
#define ll long long


#define pb push_back
#define all(v) v.begin(), v.end()
#define cy cout << "YES\n"
#define cn cout << "NO\n"
#define fl(s,e) for(int i=s;i<e;i++)




void solve() {
    ll a,b,x; cin >> a >> b;
    ll ans=0,minu=0,mini = INT_MAX;
    fl(0,a){
       // minu=0,mini = INT_MAX;
        for(ll j=0;j<b;j++){
            cin >> x;
            if(x<0){
                minu++;
                x*= (-1);
            }
            mini=min(mini,x);
            ans+=x;
        }
        
    }
    if(minu%2)  ans-=(2*mini);
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