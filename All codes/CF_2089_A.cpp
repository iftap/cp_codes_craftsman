#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    
    ll n; cin >> n;
    cout << "2 1 ";
    if(n>2){
        for(ll i=3;i<=n;i++) cout << i << " ";
    }
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