#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n, x; 
    cin >> n;
    vector<pair<ll, ll>> a(n);
    vector<pair<ll, ll>> b(n);
    vector<pair<ll, ll>> c(n);
    
    
    for (ll i = 0; i < n; i++) {
        cin >> x;
        a[i] = make_pair(x, i); 
    }
    for (ll i = 0; i < n; i++) {
        cin >> x;
        b[i] = make_pair(x, i); 
    }
    for (ll i = 0; i < n; i++) {
        cin >> x;
        c[i] = make_pair(x, i); 
    }
    
    
    sort(a.rbegin(), a.rend()); 
    sort(b.rbegin(), b.rend());
    sort(c.rbegin(), c.rend());
    
    vector<ll> v;
    ll z;
    
    
    for (ll i = 0; i < 3; i++) {
        for (ll j = 0; j < 3; j++) {
            for (ll k = 0; k < 3; k++) {
                if (a[i].second != b[j].second && a[i].second != c[k].second && b[j].second != c[k].second) {
                    z = a[i].first + b[j].first + c[k].first;
                    v.push_back(z);
                }
            }
        }
    }
    
    sort(v.rbegin(), v.rend());
    cout << v[0] << endl;
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