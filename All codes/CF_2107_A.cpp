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
        ll n,x; cin >> n;
       // vector<pair<ll,ll>> p;
        vector<ll> v,g;
        map<ll,ll>mp;
        set<ll> st;
        fl(0,n){
            cin >> x;
            v.push_back(x);
            st.insert(x);
            
        }
        if(st.size()<2){
            cn;
            return;
        }
        else{
            cy;
            ll x = *max_element(v.begin(),v.end());
            fl(0,n){
                
                if(v[i]==x) cout << "1 ";
                else cout << "2 ";          }
            cout << endl;
        }

        
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