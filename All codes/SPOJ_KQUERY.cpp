#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vll = vector<ll>;

class SEGT {
    vector<pair<ll,ll>> seg;
    ll n;

public:
    SEGT(ll n) : n(n) {
        seg.assign(4*n + 5, {LLONG_MAX, LLONG_MIN});
    }

    void build(ll ind, ll low, ll high, vll &arr) {
        if (low == high) {
            seg[ind] = {arr[low], arr[low]};
            return;
        }
        ll mid = (low + high) >> 1;
        build(2*ind+1, low, mid, arr);
        build(2*ind+2, mid+1, high, arr);

        seg[ind].first  = min(seg[2*ind+1].first, seg[2*ind+2].first);
        seg[ind].second = max(seg[2*ind+1].second, seg[2*ind+2].second);
    }

    ll query(ll ind, ll low, ll high, ll l, ll r, ll k) {
        // no overlap
        if (r < low || high < l) return 0;

        // all values <= k
        if (seg[ind].second <= k) return 0;

        // full overlap and all > k
        if (low >= l && high <= r && seg[ind].first > k)
            return (high - low + 1);

        // partial
        ll mid = (low + high) >> 1;
        return query(2*ind+1, low, mid, l, r, k) +
               query(2*ind+2, mid+1, high, l, r, k);
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin >> n;

    if (n == 0) {
        ll q; cin >> q;
        while (q--) cout << 0 << '\n';
        return 0;
    }

    vll arr(n);
    for (ll i = 0; i < n; i++) cin >> arr[i];

    SEGT st(n);
    st.build(0, 0, n-1, arr);

    ll q;
    cin >> q;
    while (q--) {
        ll l, r, k;
        cin >> l >> r >> k;
        cout << st.query(0, 0, n-1, l-1, r-1, k) << '\n';
    }

    return 0;
}
