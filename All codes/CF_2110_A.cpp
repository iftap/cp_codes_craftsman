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
    ll n,x ,ansi=0; cin >> n;
    vector<ll> v(n);
    fl(0,n){
        cin >> v[i];
        
    } 
    sort(all(v));
    ll an=n-1,ct=0;
    if(v[n-1]%2 == v[0]%2){
        cout <<"0\n";
        return;
    }
    fl(1,n){
        if(v[i]%2 == v[i-1]%2) ct++;
        else break;
    }
    an= min(an,ct+1);
    ct=0;
    for(ll i= n-1;i>=0;i--){
        if(v[i]%2 == v[i-1]%2) ct++;
        else break;
        
    }
    an= min(an,ct+1);
    
    
    
    cout << an << endl;

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