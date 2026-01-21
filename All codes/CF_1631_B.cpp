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
    ll n ,ansi=0; cin >> n;
    vector<ll> v(n);
    for(ll i=n-1;i>=0;i--) cin >> v[i];
    ll f = v[0],base=1;
    fl(1,n){
        if(v[i]!= f){
            ansi++;
            base *=2;
            i=base-1;
        }
        
        else base++;

    }
    
    cout <<ansi << endl;

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