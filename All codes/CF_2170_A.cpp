#include <bits/stdc++.h> 
using namespace std; 
#define all(v) v.begin(), v.end() 
#define rall(v) v.rbegin(), v.rend() 
#define cy cout << "YES\n" 
#define cn cout << "NO\n" 
#define fl(s,e) for(int i=s;i<e;i++) 
#define flj(s,e) for(int j=s;j<e;j++) 
#define vll vector<ll> 
#include<numeric> 
#define sz size()
typedef long long       ll;
typedef long double     ld;
typedef vector<int>     vi;
typedef vector<vi>      vvi;
typedef vector<vll>     vvll;
typedef vector<bool>    vb;
typedef vector<vb>      vvb;
typedef pair<int, int>  pi;
typedef vector<pi>      vpi;
typedef pair<ll, ll>    pll;
typedef vector<pll>     vpll;
#define pb              push_back
#define ff              first
#define ss              second
#define flr(i, a, b)    for(ll i = (a); i >= (b); i--)
#define lcm(a, b)       ((a / __gcd(a, b)) * b)
vll v1,v2;
ll n ;
static const int N = 200001;
vector<ll> g[N];
ll gg;
map<ll,bool> vis;
ll ansi =-1,nnn=0,hq=0;
 
void dfs(int v){
    if(vis[v]) return;
    vis[v]=1;
    ansi++;
    //cout << v<<' ' <<" val"<< ansi<< endl;
    if(nnn<ansi){
        gg= v;
        nnn = ansi;
    }
    
    fl(0,g[v].sz){
        dfs(g[v][i]);
        
    }
    --ansi;
    return;
}
ll gr= LLONG_MAX;
bool mmm=0;
void dfs2(ll v){
    if(v==gg){
        ansi++;
        gr= min(ansi,gr);
        return;
    }
    vis[v]=1;
    //cout << v<<" "<< ansi<< endl;
    
    ansi++;
    fl(0,g[v].sz){
       if(!vis[g[v][i]])dfs2(g[v][i]);
       else{
        if(g[v][i]==gg)dfs2(gg);
       }  
    }
    --ansi;
    return;
}
 
 
void siuu(){
    ll n ; cin >> n ;
    if(n==1){
        cout << 1 << endl;return;
    }
    if(n==2){
        cout << 9 << endl;return;
    }
    ll ansi =0;
    ansi= 3*(n*n)- 3;
    ansi+= (n*(n-1))-1;
    ansi = max(ansi,(ansi-2*n+((n*(n-2)-1))));
    cout << ansi << endl;
 
 
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

