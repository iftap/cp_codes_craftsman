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
ll n,m ;
static const int N = 1001;
vector<vector<int>> vis;
vector<vector<char>> v;




void dfs(ll r,ll c){
    if(vis[r][c]>0 || v[r][c]=='#' )return;
    vis[r][c]=1;
    dfs(min(n-1,r+1),c);
    dfs(min(n-1,r+1),c);
    dfs(r,min(m-1,c+1));
    dfs(r,max(0LL,c-1));
    return;
}


void siuu(){
    cin >> n >> m ;
    vis.resize(n, vector<int>(n,0));
    v.resize(n, vector<char>(m));
    fl(0,n){
        flj(0,m)cin >> v[i][j];
    }
    ll gg=0;
    fl(0,n){
        flj(0,m){
            if(vis[i][j]==0 && v[i][j]=='.'){
                dfs(i,j);
                gg++;
            }
        }
    }
    cout << gg << endl;
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

