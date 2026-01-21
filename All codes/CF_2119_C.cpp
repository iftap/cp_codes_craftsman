#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define c00 cout << "-1\n"

void solve() {
    ll n, l, r, k;
    cin >> n >> l >> r >> k;

    if (n % 2) {
        cout << l << "\n";
        return;
    }
    if (n == 2) {
        c00;
        return;
    }

    ll gg = 64 - __builtin_clzll(l); 
    ll pp = 1LL << gg;           

    if (pp <= r) {
        if (k <=n-2) cout << l << endl;
        else cout << pp << endl;
        return;
    } 
    c00;
    
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
