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
map<ll,ll>vis;
ll x,y;
vll mm;
bool gg =0;
vector<ll> g[1000];
void dfs(ll a, ll b,ll ini,ll fin ,vector<vector<ll>>&vc){
    if(v>y)return;
    if(gg)mm.pb(v);
    if(vis[v])return;
    if(v==y){
        gg=1;
        vis[v]=1;
        mm.pb(v);
        return;
    }
    
    
    ll a = v*2,b= v*10 +1;
        
    
    
    dfs(a);
    dfs(b);

        
}


void siuu(){ 
    
    ll n , m ; cin >> n >> m ;
    vector<vector<ll>> v(n, vector<ll>(m, 0));
    fl(0,n){
        flj(0,m)cin >> v[i][j];
    }
    ll r,c,x; cin >> r >> c>> x;

    

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