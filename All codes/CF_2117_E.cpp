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
    vector<ll> a(n),b(n);
    map<ll,bool> mp;
    fl(0,n)  cin >> a[i];
    fl(0,n) cin >> b[i];
    ll ans=-1;
    if(a[n-1]==b[n-1]){
        cout << n << endl;
        return;
    }
    for(ll i = n-2;i>=0;i--){
        if(mp[a[i]] || mp[b[i]] || a[i]==b[i] || a[i]==a[i+1] || b[i]==b[i+1]){
            ans= i;
            break;
        }
        mp[a[i+1]]=mp[b[i+1]]=1 ;
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
