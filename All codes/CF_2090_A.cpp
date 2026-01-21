#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    
    ll x,y,a; cin >> x >> y >> a;
    
    ll rem = a%(x+y);
    if(rem<x) cout << "NO" << endl;
    else cout << "YES" << endl;
    


    

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