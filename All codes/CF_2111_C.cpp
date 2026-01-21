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
    ll n,m; cin >>n;
    ll ans =LLONG_MAX;
    ll cnt =0,x,y;
    vector<ll>v(n),w;
    fl(0,n) cin >> v[i];
    w=v;
    sort(all(w));
    if(w[0]==w[n-1]){
        cout <<"0\n";
        return;
    }
    fl(1,n){
        cnt++;
        if(v[i]!=v[i-1]) {
            ans = min(ans,(n-cnt)*v[i-1]);
            cnt=0;
        }
       
        
    }
    cnt=0;
   for(ll i = n-2; i>=0;i--){
    cnt++;
     if(v[i]!=v[i+1]) {
        ans = min(ans,(n-cnt)*v[i+1]);
        break;
     }
   }

    cout << ans << endl;
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