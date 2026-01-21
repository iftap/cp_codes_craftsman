#include <bits/stdc++.h>
using namespace std;
#define ll long long


#define pb push_back
#define all(v) v.begin(), v.end()
#define cy cout << "YES\n"
#define cn cout << "NO\n"
#define fl(s,e) for(int i=s;i<e;i++)




void solve() {
    ll n,m,c =0,d=0,temp=0,INF=LLONG_MAX;
     cin >> n >>m;
    vector<ll> a(n),b(m),s(m),p(m);
    fl(0,n) cin >> a[i];
    fl(0,m){
        cin >>b[i];
        
    }
   
   
 
    fl(i, m){
        s[i] = -INF;
        p[i] = INF;
    }
 
    
        ll p1 = 0;
        fl(i, n){
            if(p1 >= m) break;
            if(a[i] >= b[p1]){
                p[p1] = i;
                p1++;
            }
        }
    
        ll p2 = m - 1;
        for (int i = n - 1; i >= 0; i--){
            if (p2 < 0) break;
            if (a[i] >= b[p2]){
                s[p2] = i;
                p2--;
            }
        }
    
 
    if(p[m - 1] != INF) {
        cout << 0 <<endl;
        return;
    }
    ll ans = LLONG_MAX;
 
    for (int i = 1; i < m - 1; i++) {
        if (s[i + 1] > p[i - 1]){
            ans = min(ans, b[i]);
        }
    }
 
    if (s[1] != -INF) {
        ans = min(ans, b[0]);
    }
 
    if (p[m - 2] != INF){
        ans = min(ans, b[m - 1]);
    }
 
    if(ans == LLONG_MAX){
        cout << -1 << endl;
        return;
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