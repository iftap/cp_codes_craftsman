#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define cy cout << "YES\n"
#define cn cout << "NO\n"
#define fl(s,e) for(int i=s;i<e;i++)
#define vll vector<ll>

void ottarmarebap() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int &x : a) cin >> x;

    // Remove consecutive duplicates
    a.resize(unique(a.begin(), a.end()) - a.begin());
    n = a.size();

    int ans = n;

    for (int i = 0; i + 2 < n; ++i) {
        if ((a[i] < a[i+1] && a[i+1] < a[i+2]) || (a[i] > a[i+1] && a[i+1] > a[i+2])) {
            ans--;  // middle element is redundant
        }
    }

    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        ottarmarebap();
    }

    return 0;
}
