#include <bits/stdc++.h>
#include <numeric>  // for std::lcm
using namespace std;

#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define cy cout << "YES\n"
#define cn cout << "NO\n"
#define fl(i,s,e) for(int i=s;i<e;i++)
vector<ll> pm;

void solve() {
    ll n; cin >> n;
    ll p,cntt,q,ans;
   // if(n==1){
     //   cout <<"6\n";
     //   return;
   // }
    for(ll i = 0;i<pm.size();i++){
        if(pm[i]>=(n+1)){
            cntt=i;
            p=pm[i];
            break;
        }
    }
    for(ll i = cntt;i<pm.size();i++){
        if(pm[i]>=(p+n)){

            q= pm[i];
            break;
        }
    }
    ans = min(1LL*p*p*p,1LL*p*q);
    cout << ans << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    pm.pb(2);
    for(ll i=3;i<100000;i++){
        bool primee=1;
        for(ll j=2;j*j<=i;j++){
            if(i%j==0){
                primee=0;
                break;
            }
        }
        if(primee) pm.pb(i);
    }


    ll t; 
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
