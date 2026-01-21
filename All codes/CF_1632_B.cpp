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




    void solve() {
        ll n,x,ans=0; cin >> n;
        vector<ll> v(n),biti(31);
        fl(0,n){
            cin >> v[i];
        }
        fl(0,32){
            ll temp = 1LL<<i;
           // temp--;
            ll z=0,oo=0;
            for(ll j=0;j<n;j++){
                if(temp & v[i]) oo++;
                else z++;
            }
            if(oo>z) biti[i]=1;
            else biti[i]=0;
            
        }
        x=0;
        fl(0,32){
            if(biti[i]) x |= (1LL<<biti[i]);
        }
        fl(0,n) ans += x^v[i];
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