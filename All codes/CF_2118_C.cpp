#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define cy cout << "YES\n"
#define cn cout << "NO\n"
#define fl(s,e) for(int i=s;i<e;i++)
ll ans =0;
vector<ll> v;
void tf(ll n){
    fl(0,64){
        if(n & (1LL<<i)) ans++;
        else v.pb(i);
    }

}




void ottarmarebap(){
    ll n ,k,x; cin >> n>>k;
    v.clear();ans=0;
    fl(0,n){
        cin >> x;
        tf(x);
    }
    sort(all(v));
    fl(0,v.size()){
        if(k<(1LL<<v[i]) || k <=0) break;
        else{
            k-=(1LL<<v[i]);
            ans++;
        }
    }
    cout << ans  << endl;

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