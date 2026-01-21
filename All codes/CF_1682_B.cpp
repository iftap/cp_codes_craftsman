#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define cy cout << "YES\n"
#define cn cout << "NO\n"
#define fl(s,e) for(int i=s;i<e;i++)
#define vll vector<ll>


void ottarmarebap(){
    ll n;cin >> n;
    vll v(n),bm;
    fl(0,n) cin >> v[i];
    ll ans=(1<<60)-1;
   // if(v[0]!=0){
     //   cout <<"0\n";
       // return;
    //}
    bool gg=0;
    fl(0,n){
        if(i!=v[i]) bm.pb(i);
    }
    
    fl(0,bm.size()){
        ans&= bm[i];
    }
    cout << ans << endl;


}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll t=1; 
    cin >> t;
    while (t--) {
        ottarmarebap();
    }

    return 0;
}