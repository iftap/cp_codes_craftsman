#include <bits/stdc++.h> 
using namespace std; 
#define ll long long 
#define pb push_back 
#define all(v) v.begin(), v.end() 
#define rall(v) v.rbegin(), v.rend() 
#define cy cout << "YES\n" 
#define cn cout << "NO\n" 
#define fl(s,e) for(int i=s;i<e;i++) 
#define flj(s,e) for(int j=s;j<e;j++) 
#define vll vector<ll> 
#include<numeric> 
#define sz size()
const int N= 5e5+1;
vll vis(N,0);
vll v[N],mm[N];
vll gg;
ll cnt =0;

void dfs(ll x){
    if(vis[x])return;
    vis[x]=1;
    cnt++;
    gg.pb(x);
    for(auto child:v[x]) dfs(child);
}
void siuu(){
    ll n , m ; cin >> n >> m ;
    vll ansi(n+1,1);
    fl(0,m){
        ll s; cin >> s;
        vll vv;
        ll x;
        flj(0,s){
            cin >> x;
            vv.pb(x);
        }
        flj(1,s){
            v[vv[j]].pb(vv[j-1]);
            v[vv[j-1]].pb(vv[j]);

        }
    }
    fl(1,n){
        if(!vis[i]){
            cnt =0;
            gg.resize(0);
            dfs(i);
            flj(0,gg.sz)ansi[gg[j]]=cnt;
        }
    }
    fl(1,n+1)cout << ansi[i]<< ' ';
    cout << endl;
} 
 
int main() { 
    ios::sync_with_stdio(false); 
    cin.tie(nullptr); 
    
    ll t=1;  
    //cin >> t; 
    while (t--) { 
        siuu(); 
    } 
 
    return 0; 
}

