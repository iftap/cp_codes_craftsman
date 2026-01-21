#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n ; cin >> n;
    if(n%2==0){
        cout << "-1\n";
        return;
    }
    cout << n << " ";
    for(ll i= 1;i<n;i++) cout << i << " ";
    cout << endl;
    
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
