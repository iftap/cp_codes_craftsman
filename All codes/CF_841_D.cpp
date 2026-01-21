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
ll n,m ;
static const int N = 5e5+5;
vll pr_div;
ll M=20000000;
vector<bool> isprm(M+9,1);
void seive(){
    isprm[0] = isprm[1] = 0;
    for(ll i =2;i*i<M;i++){
        if(isprm[i]){
            for(ll j = i*i;j<=M;j+=i){
                isprm[j]=0;
            }
        }
    }
    fl(2,M){
        if(isprm[i])pr_div.pb(i);
    }
}
vector<vector<pair<ll,ll>>>adj(N);
vll vis(N,0),d(N,0),ansi;

void dfs(ll node,ll par){
    vis[node]=1;
    for(auto[nd,ind]:adj[node]){
        if(nd==par)continue;
        if(!vis[nd]){
            dfs(nd,node);
            if(d[nd]){
                ansi.pb(ind);
                d[node]^=1;
            }
        }
    }
}


void siuu(){
    cin >>n >> m;
    ll sm=0,mn= -1;
    fl(1,n+1){
        cin >> d[i];
        if(d[i]==-1)mn= i;
        else sm+=d[i];
    }
    fl(1,m+1){
        ll a , b ; cin >> a >> b ;
        adj[a].pb({b,i});
        adj[b].pb({a,i});
    }

    if(sm%2==1){
        //cout << sm << endl;
        if(mn==-1)cout << "-1\n";
        else{
            d[mn]=1;
            fl(1,n+1)if(d[i]==-1)d[i]=0;
            fl(1,n+1){
                if(adj[i].sz>0 && !vis[i]) dfs(i,-1);
            }
            cout << ansi.sz << endl;
            for(auto x:ansi)cout << x << endl;
        }
    }
    else{
        //cout << sm << endl;
        fl(1,n+1)if(d[i]==-1)d[i]=0;
        fl(1,n+1)if(adj[i].sz>0 && !vis[i]) dfs(i,-1);
        cout << ansi.sz << endl;
        for(auto x:ansi)cout << x << endl;
    }




}
 //1000000
int main() { 
    ios::sync_with_stdio(false); 
    cin.tie(nullptr); 
    //seive();
    ll t=1;  
    //cin >> t; 
    while (t--) { 
        siuu(); 
    } 
 
    return 0; 
}
