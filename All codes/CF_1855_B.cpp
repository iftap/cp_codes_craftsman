#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n; cin >> n;
    ll i=1;
    for(i=1;i<n;++i){
        if(n%i != 0) {
            i--;
            break;
        }
    }
    cout << i << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--){
    solve();
    }
    return 0;
}
