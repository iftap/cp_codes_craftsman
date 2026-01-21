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
    ll n,k,temp=0; cin >> n >> k;
    map<ll,ll>mp;
    vll v(n);
    fl(0,n) {
        cin >> v[i];
        mp[v[i]]++;
    }
    bool gg=0;
   // sort(rall(v));
   //if(mp[k] & mp[0]){
    //cy;
    //return;
   //}
    fl(0,n){
        mp[v[i]]--;
        if(mp[v[i]-k]>0 || mp[v[i]+k]>0){
            gg=1;
            break;
        }
        mp[v[i]]++;
    }
    if(gg) cy;
    else cn;
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