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

vector<vector<char>> v;
vector<vector<bool>> vis;
ll gg=0;
ll m,n ; 

vll ansi (N,0);
ll cnt;
void dfs(ll x,ll y){
    if(vis[x][y])return;
    if(v[x][y]=='~')return;
    vis[x][y]=1; 
    gg++;
    dfs(x,min(n-1,y+1));
    dfs(x,max(0LL,y-1));
    dfs(min(m-1,x+1),y);
    dfs(max(0LL,x-1),y);

}
void siuu(){
    cin >> m >> n ;
    v.assign(m, vector<char>(n));
    vis.assign(m, vector<bool>(n, false));
    fl(0,m){
        flj(0,n)cin >> v[i][j];
    }
    vll ansi;
    ll tt = m*n,gm=0;
    fl(0,m){
        flj(0,n){
            if(vis[i][j]==0 && v[i][j]=='#'){
                gg=0;
                dfs(i,j);
                gm+=gg*gg;
            }
        }
    }
    ll gc= __gcd(tt,gm);
    if(gm%tt==0 && gm>=tt){
        cout << tt/gm<< endl;return;
    }
    if(gm==0){
        cout << 0<< endl;return;
    }
    if(gc==1){
        cout<< gm<<" / "<<tt<< endl;
    }
    else{
        cout << gm/gc <<" / "<<tt/gc<< endl;
    }


} 
 
int main() { 
    ios::sync_with_stdio(false); 
    cin.tie(nullptr); 
    
    ll t=1;  
    cin >> t; 
    while (t--) { 
        siuu(); 
    } 
 
    return 0; 
}

