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
    string s; cin >> s;
    ll n = s.size(),a=0;
    vector<ll> v(n);
    fl(0,n){
        
        if(s[i]==')') a++;
        else a--;
        if(a==0 && i!= n-1) {
            cy;
            return;
        }
    }
   
    
        
   
     cn;
    

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