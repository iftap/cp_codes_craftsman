#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n; cin >> n;
    
    
    if(n%2!= 0) {
        cout << "YES" << endl;
        return;
    }
   if(n&(n-1))  cout << "YES" << endl;
   else cout << "NO" << endl;
   
    
 // cout << "YES" << endl;
  return;
           
    
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