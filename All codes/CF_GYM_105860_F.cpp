#include <bits/stdc++.h>
using namespace std;
#define ll long long


#define pb push_back
#define all(v) v.begin(), v.end()
#define cy cout << "YES\n"
#define cn cout << "NO\n"
#define fl(s,e) for(int i=s;i<e;i++)




void solve() {
    
    ll a,b,c,ans=0; cin >> a >> b >> c;
    //ll ans = (a/4)*2;
   // a%=4;
   // ans+= (b/4)*3;
   // b%=4;
    //ans+=c;
    ll temp = a*2 + b*3 + c*4;
    ans+= temp/4;
    if(temp%4!=0) ans++;
    cout << ans << endl;

 
    
      
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