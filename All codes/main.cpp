#include <bits/stdc++.h>
using namespace std;
#define MAXN 400001
#define ll long long

void solve() {
   ll a,b,c; cin >> a>> b >> c;
   bool flag = true;
   if(a==b && b== c) flag = true;
   
   
   

   if(flag) cout << "YES" << endl;
   else cout << "NO" << endl;
    
    
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
 
    ll t; 
    cin >> t;
    while (t--) {
        solve();
    }
 
    return 0;
}