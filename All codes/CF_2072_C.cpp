#include <bits/stdc++.h>
using namespace std;
#define MAXN 400001
#define ll long long

void solve() {
   ll a,b,c; cin >> a>> b >> c;
   bool flag = false;
   if(a=b && b== c){
    flag = true;
   }
   else if(a>b || a>c){
    if((a-c)%2 ==0) flag = true;
    if(a>b) flag = true;
   }
   else if( c>a || c>b){
    if((c-a)%2 ==0) flag = true;
    if(c>b) flag = true;
   }
   else flag = false;

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