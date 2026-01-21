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
vll v1,v2;
vector<vector<ll>> g,m;
ll mn;
ll ans1=0,ans2=0;

void dfs(int v,int par){
    //if()
    if(v1[v]>0 && v!=mn)return;
    if(g[par][v]>0)ans1+= g[par][v];
    v1[v]=1;
    ll a = min(m[v][0],m[v][1]);
    ll b = max(m[v][0],m[v][1]);
    if(a!= par)dfs(a,v);
    
    if(b!= par)dfs(b,v);

}
void dfs2(int v,int par){
    //if()
    if(v2[v]>0 && v!=mn)return;
    if(g[par][v]>0)ans2+= g[par][v];
    v2[v]=1;
    ll a = min(m[v][0],m[v][1]);
    ll b = max(m[v][0],m[v][1]);
   
    
    if(b!= par)dfs2(b,v);
     if(a!= par)dfs2(a,v);

}


void siuu(){ 
    
    ll n ; cin >> n;
    g.resize(n+1, vector<ll>(n+1, 0));
    v1.resize(n+1,0);
    v2.resize(n+1,0);
    m.resize(n+1,vector<ll>(0, 0));
    fl(0,n){
        ll a,b , c; cin >> a >> b >> c;
        g[a][b]=c;
        g[b][a]=-c;
        m[a].pb(b);
        m[b].pb(a);
    }
    mn=1;
    dfs(1,0);
    dfs2(1,0);
    cout << min(ans1,ans2)<<endl;

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

