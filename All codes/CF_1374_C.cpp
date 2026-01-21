#include <bits/stdc++.h>
using namespace std;
#define ll long long


#define pb push_back
#define all(v) v.begin(), v.end()
#define cy cout << "YES\n"
#define cn cout << "NO\n"
#define fl(s,e) for(int i=s;i<e;i++)




void solve() {
    ll n,o=0,c=0; cin >> n;
    char x;
    vector<ll> v(n);
    for(ll i=0;i<n;i++) {
        cin >> x;
        if(x=='(') o++;
        else o--;
        if(o<0){
            o=0;
            c++;
        }
    }
    
   
    //if(v[0]==1 && n>2) cnt--;
    //if(v[n-1]==0) cnt--;
    //ans= min(ans,cnt);
    cout << c << endl;

        
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