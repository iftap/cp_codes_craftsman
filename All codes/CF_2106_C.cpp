#include <bits/stdc++.h>
using namespace std;
#define ll long long


#define pb push_back
#define all(v) v.begin(), v.end()
#define cy cout << "YES\n"
#define cn cout << "NO\n"
#define fl(s,e) for(int i=s;i<e;i++)




void solve() {
    ll n ,temp=0, x; cin >> n >> x;
    vector<ll> a(n),b(n),d;
    set<ll>c;
    fl(0,n){
        cin >> a[i];
    }
    fl(0,n) cin >> b[i];
    fl(0,n) {
        if(b[i]==-1) {
            d.push_back(a[i]);
            continue;
        }
        c.insert(a[i]+b[i]);
         temp =a[i]+b[i];
    }
    ll ans=0;
    if(c.size()==1){
        //cout << "1\n";
        for(ll i=0;i<d.size();i++){
            if(temp-d[i]>x){
                cout << "0\n";
                return;
            }
            if(d[i]>temp){
                cout << "0\n";
                return;
            }
        }
        cout << "1\n";
        return;
    }
    if(c.size()>1){
        cout << "0\n";
        return;

    }
    if(c.size()==0){
        sort(a.begin(),a.end());
        ans = (a[0]+x-a[n-1]+1);
        cout << ans  << endl;;
    }

    
        
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