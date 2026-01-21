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
ll N= 1e5+1;
vll vis(N,0);
vector<vector<ll>> v;
vll ansi;

bool gg =0;
ll cnt;
void dfs(ll a,ll cc){
    if(gg)return;
    cc++;
    ll tt;
    if(cc%2)tt=1;
    else tt=2;
    if(vis[a]==1 && tt!=ansi[a]){
        gg=1;return;
    }
    if(vis[a])return;
    vis[a]=1;
    ansi[a]=tt;
    for(auto x:v[a]){
        dfs(x,cc);
    }
    cc--;
}
void siuu(){
    ll n , m ; cin >> n >> m ;
    v.resize(n+1);
    fl(0,m){
        ll a , b ; cin >>a >> b ;
        v[a].pb(b);
        v[b].pb(a);
    }
    ansi.resize(n+1,0);
    fl(1,n+1){
        if(!vis[i]){
            dfs(i,1);
        }
        if(gg){
            cout << "IMPOSSIBLE\n";return;
        }
    }
    fl(1,n+1)cout << ansi[i]<<' ';
    cout  << endl;


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

