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
    vll v(n);
    set<ll> st;
    fl(0,n) {
        cin >> v[i];
        st.insert(v[i]);
    }

    if (st.size() < 3) {
        cy;
        return;
    }

    ll a, b;
    bool is_pal = true;
    for (ll i = 0 ; i < n/2; i++) {
        if (v[i] != v[n-i-1]) {
            a = v[i];
            b = v[n-i-1];
            is_pal = false;
            break;
        }
    }

    if (is_pal) {
        cy;
        return;
    }

    // Try removing b
    bool ss1 = true;
    vll ppt;
    fl(0,n){
        if(v[i] == b) continue;
        ppt.pb(v[i]);
    }
    fl(0,ppt.size()){
        if(ppt[i] != ppt[ppt.size()-i-1]){
            ss1 = false;
            break;
        }
    }

    if (ss1) {
        cy;
        return;
    }

    // Try removing a
    bool ss2 = true;
    vll pp;
    fl(0,n){
        if(v[i] == a) continue;
        pp.pb(v[i]);
    }
    fl(0,pp.size()){
        if(pp[i] != pp[pp.size()-i-1]){
            ss2 = false;
            break;
        }
    }

    if (ss2) cy;
    else cn;
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
