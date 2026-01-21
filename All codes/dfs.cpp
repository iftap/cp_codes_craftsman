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
bool vis[1000];
 vector<ll> g[1000];
void dfs(int v){
    if(vis[v])return;
    //take action first after enter
    
    vis[v]=1;
    for(int c:g[v]){
        // take action on child before entering child dfs
        //if(vis[c])continue;
        dfs(c);
        // take action on c after executing c
    }
    // take action before exiting vertex
}


void siuu(){ 
    
    ll n , m ; cin >> n >> m ;
    fl(0,9){
        ll a, b; cin >>  a >> b;
        g[a].pb(b);
        g[b].pb(a);
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

/*

 fl(0,n){
        flj(0,n){
            if(i>j){
                if(a[i][j]<0.001)a[i][j]=0;
            }
        }
    }*/