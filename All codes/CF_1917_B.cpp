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
        ll n ; cin >> n;
        map<char,ll> mp;
        string s; cin >> s;
        ll ans = n*(n-1) -((n-1)*(n-2))/2 +1 ;
        fl(0,n){

            if(mp[s[i]]) ans-= (n-i);
            mp[s[i]]=2;
        }
        cout << ans << endl;
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