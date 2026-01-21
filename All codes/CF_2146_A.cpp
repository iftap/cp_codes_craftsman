#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define cy cout << "YES\n"
#define cn cout << "NO\n"
#define fl(s,e) for(int i=s;i<e;i++)
#define vll vector<ll>

ll n;
string s1, s2; 
vll v;

bool good(ll x) {
    vll gg (x,0);
    fl(0,x) gg[i]= v[i];  
    sort(all(gg));
    ll cnt =0;
    ll ss = gg[0];
    vll g;
    fl(0,x){
        if(gg[i]!=ss){
            g.pb(cnt);
            cnt=0;
            ss=gg[i];
            continue;
        }
        cnt++;
    }
    if(cnt>0) g.pb(cnt);
    sort(all(g));
    return g[0]==g[g.size() -1];
}

void ottarmarebap() {
    cin >> n;
    v.resize(n,0); 
    
    ll ans =0,cnt=0;
    vll aa(n+1,0);
    fl(0, n) {
        cin >> v[i];
        aa[v[i]]++;
    }
    sort (rall(aa));
    fl(0,n+1){
        
            ans = max(ans,aa[i]*(i+1));
          
    }
    cout << ans<< endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t = 1; 
    cin >> t;
    while (t--) {
        ottarmarebap();
    }
    return 0;
}
