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


void ottarmarebap(){
    ll n; cin >> n;
    ll a,b,c,mx=LLONG_MIN,mn,sm=0,d; cin >> a>>b >> c >>d;
    vll v(n);
    fl(0,n) {
        cin >> v[i];
        sm+=v[i];
        mx= max(mx,v[i]);
    }
    ll aa= abs(a-c),bb= abs(b-d);
    ll dd =aa*aa+bb*bb;
    mn = 2*mx- sm;
    if(mn<0) mn =0;
    if(dd<= sm*sm && dd>= mn*mn ) cy;
    else cn;
    
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll t=1; 
    cin >> t;
    while (t--) {
        ottarmarebap();
    }

    return 0;
}









