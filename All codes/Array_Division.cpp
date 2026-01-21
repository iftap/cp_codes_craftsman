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
    ll cnt=0;
    ll temp=0;
    fl(0,n){
        if(v[i]>x) return 0;
        if(temp+v[i]>x) {
            cnt++;
            temp=0;
        }
        temp+=v[i];
    }
    if(temp) cnt++;
    //cout << x<<" "<<cnt << endl;
    return cnt<=k;
        
}
// 0000001111100
void ottarmarebap(){
.    ll l=0,r=0,m;
    //vll pf(n+1,0);
    fl(0,n){cin >> v[i]; r+=v[i];}
    ll ans =0;
    while(l+1<r){
        m= l+(r-l+1)/2;
        if(good(m)) r=m;
        else l=m;
    }
    
    cout << r<< endl;
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


