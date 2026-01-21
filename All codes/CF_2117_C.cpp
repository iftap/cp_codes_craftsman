#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define cy cout << "YES\n"
#define cn cout << "NO\n"
#define fl(s,e) for(int i=s;i<e;i++)

void solve() {
    ll n; cin >> n;
    vector<ll>v(n);
    fl(0,n) cin >> v[i];

    map<ll,ll>mp1,mp2,z;
    ll ans =0,c1 =0,c2 =0;
    mp1[v[0]]++;
    c1++;
    fl(1,n) {
        if(mp1[v[i]] != 0){
            mp1[v[i]] =0;
            if(mp1[v[i]] == 0) c1--;
        }
        mp2[v[i]]++;
        if(mp2[v[i]] == 1) c2++;
        if(c1 == 0){
            ans++;
            c1 = c2;
            c2 =0;
            mp1 = mp2;
            mp2 =z;
        }
    }

    cout << ans+1 << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t = 1;
    cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}
