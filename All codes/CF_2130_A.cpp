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
ll cnn(ll l,ll r ,ll a){
    return r/a - ((l-1)/a);
}

void ottarmarebap(){
    ll n ; cin >> n;
    map<ll,ll>mp;
    vll v(n);
    ll ans=0;
    fl(0,n){
        cin >> v[i];
        mp[v[i]]++;
        ans+=v[i];
    }
    ll z = mp[0];
    ans+= z;
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

