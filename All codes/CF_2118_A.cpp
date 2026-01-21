#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define cy cout << "YES\n"
#define cn cout << "NO\n"
#define fl(s,e) for(int i=s;i<e;i++)

void solve() {
    ll n,k,s; cin >> n >> k;
    s=n-k;
    
    
    fl(0,k) cout << "1";
    fl(0,s) cout <<'0';
    cout << endl;
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
