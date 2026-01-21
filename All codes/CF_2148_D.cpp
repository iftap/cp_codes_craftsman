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
#include<numeric>
#define sz size()

void ottarmarebap(){
    ll n ; cin >> n;
    vll ev, oo;
    ll x,ans=0; 
    fl(0,n){
        cin >> x;
        if(x%2) oo.pb(x);
        else {ev.pb(x);ans+=x;}
    }
    if(oo.sz==0){cout <<"0\n";return;}
    sort(rall(oo));
     ans += oo[0];
     ll cnt=1;
    fl(1,oo.size()){
        if(i%2==0){
            ans+=oo[cnt];
            cnt++;
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
        ottarmarebap();
    }

    return 0;
}

