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
// ami jodi logans eo kori taw amar theke almost n2 koraa lagtese,,think aladavabe eta hobena bradar
// a1+ a2 + an<=k
// idea paisi hehe
// prefix sum
// prottek index er jonno bs ,
bool good(ll x){
    ll ans=0;
    fl(0,n){
        if(v[i]<x)ans+=(x-v[i]);
    }
    return ans;
        
}
// 11111000000000
void ottarmarebap(){
    cin >> n >> k;
    v.resize(n,0);
    ll l=0,r=n,m;
    vll pf(n+1,0);
    fl(0,n) {
        cin >> v[i];
        pf[i+1]=pf[i]+v[i];
    }
    ll ans =0;
    fl(0,n){
        l =i,r= n+1;
        while(l+1<r){
            m= l+(r-l+1)/2;
            if(pf[m]-pf[i]<=k) l=m;
            else r=m;
        }
        ans= max(ans,l-i);
    }
    
    cout << ans<< endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll t=1; 
    //cin >> t;
    while (t--) {
        ottarmarebap();
    }

    return 0;
}


