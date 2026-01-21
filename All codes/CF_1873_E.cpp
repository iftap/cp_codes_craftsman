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

 ll n,m ,k ,a,b,c; 
 vll v;
// vll tm;
ll good(ll x){
    ll ans=0;
    fl(0,n){
        if(v[i]<x)ans+=(x-v[i]);
    }
    return ans;
        
}
// 000000011111111
void ottarmarebap(){
    cin >> n >> k;
    v.resize(n,0);
    ll l=0,r=1e9,m;
    fl(0,n){
        cin >> v[i];
        r= max(r,v[i]);
    }
    r+=k;
     ll ans =0;
    while(l<r){
        m=l+(r-l+1)/2;
        ll g = good(m);
        //if(g==k) {ans=m;break;}
        if(g<=k) l=m;
        else r=m-1;

    }
    cout << r<< endl;
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


