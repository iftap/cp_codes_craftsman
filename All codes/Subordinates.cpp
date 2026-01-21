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
ll N= 2*1e5+1;
vll vis(N,0);
vector<vector<ll>> v;


vll ansi (N,0);
ll cnt;
void dfs(ll a){
    if(vis[a])return;
    vis[a]=1;
    cnt++;
    ll gg =cnt;
    for(auto x: v[a]){
        
        if(!vis[x]){
            dfs(x);
            ansi[a]+= cnt-gg;
            gg= cnt;
        }
    }
}
void siuu(){
    ll n ; cin >>n ;
    v.resize(N);
    fl(2,n+1){
        ll a; cin >> a;
        v[a].pb(i);
        v[i].pb(a);
    }
    cnt=0;
    dfs(1);
    
    fl(1,n+1){
        cout << ansi[i]<<' ';
    }


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

