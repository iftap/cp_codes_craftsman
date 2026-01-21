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



void ottarmarebap() {
    ll n,m ; cin >> n >> m ;
    vll v(m+1,0);//
    ll sp=0;
    vector<vector<ll>>vv;
    fl(0,n){
        ll k ,x; cin >> k;//  prottek set e koita element ase
        vll tt;
        while(k--){
            cin >> x;//element of st
            tt.pb(x);///
            if(x<=m){
               v[x]++;// oi number ta ache kina check
            }
        }
        vv.pb(tt);
    }
    fl(1,m+1){  //1 theke m  i=1,i<m+1
        if(v[i]==0){cn;return;}//no print
    }
    fl(0,n){
        ll temp=0;
        for(ll j=0;j<vv[i].size();j++){// [i][j] v[i]=1 2 3 
            if(map[arra_yelemet[i][j]]>1 && vv[i][j]<=m){ /// v[item] v[x]>1 
                temp++;
            }
            if(temp==vv[i].size()) sp++;
        }
    }

    /*
    n= 3 m=2          v[1]=2,v[2]=2  

    2     1 2    tmp=2,  temp== v[i].size  special
    1     1
    1     2
    
    */
    
     
    if((sp)>= 2)cy;
    else cn;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t = 1; 
    cin >> t;
    while (t--) {
        ottarmarebap();
    }
    return 0;
}