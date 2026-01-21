#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define cy cout << "YES\n"
#define cn cout << "NO\n"
#define fl(s,e) for(int i=s;i<e;i++)
void chk(ll n){
    
}







void solve(){
    ll a,b,c,d; cin >> a >> b >> c >> d;
    ll x = min(a,b);
    x= min(x,c);
    x= min(x,d);
    if(x== b || x==d )  cout << "Gellyfish\n";
    else if(x==a ) cout << "Flower\n"; 
    //else if( x== d) cout << "Gellyfish\n";
    else cout << "Flower\n";
    //if(a<=b){
   ///     if(a<=d || b<=d) cout << "Flower\n"; 
    //    else cout << "Gellyfish\n";
   // }
   // else {
   //     if(b<=c || b>=d) cout << "Gellyfish\n";
   //     else cout << "Flower\n";
   // }

}
  
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll t=1; 
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}