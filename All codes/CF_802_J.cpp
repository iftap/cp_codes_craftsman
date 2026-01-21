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
ll n ;
void dfs(int v,int par){
    
    //if(v1[v]>0)return;
    ans1+= g[par][v];
    v1[v]=1;
    ans2= max(ans2,ans1);
    //ll gg = 0,in=m[v][0];
    for(auto x:m[v]){
        if(v1[x]>0){
            ans2= max(ans2,ans1);
        }
        else{
            dfs(x,v);
        }
    }
    
    ans1-= g[par][v];
}



void siuu(){ 
    
     cin >> n;
    g.resize(n+1, vector<ll>(n+1, 0));
    v1.resize(n+1,0);
    v2.resize(n+1,0);
    m.resize(n+1,vector<ll>(0, 0));
    fl(1,n){
        ll a,b , c; cin >> a >> b >> c;
        g[a][b]=c;
        g[b][a]=c;
        m[a].pb(b);
        m[b].pb(a);
    }
    ll ansi =0;
    fl(0,n){
       // v1.resize(n+1,0);
        if(v1[i]==0){
            ans1=0;
            dfs(i,i);
        }
        //ansi= max(ansi,ans1);
    }
    cout << ans2 << endl;


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

