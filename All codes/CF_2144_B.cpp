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
    ll n ; cin >> n ; 
    vll v(n);
    ll cno=0;
    ll lb=-1,upb=-1;
    map<ll,ll> mp;
    fl(0,n) {
        cin >> v[i];
        if(v[i]==0)cno++;
        mp[v[i]]++;
    }
    if(cno==1){
        ll zr,nami;
        fl(0,n){
            if(v[i]==0){
                zr=i;
            }
            if(mp[i+1]==0) nami = i+1;
        }
        v[zr]= nami;
    }
    fl(0,n){
        if(v[i]!= (i+1)){
            lb= i;break;
        }
    }
    for( ll i =n-1;i>=0;i--){
        if(v[i]!= (i+1)){
            upb= i;break;
        }
    }
    if(lb==upb){
        cout << 0 << endl;
    }
    else cout << upb-lb+1 << endl;
    
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

