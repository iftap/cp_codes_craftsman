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
vector<vector<ll>>g(N);

ll gg;
vector<bool> vis(N,0);

 
void dfs(int v,ll numb){
    vis[v]=1;
    v1[v]=numb;
    
    fl(0,g[v].sz){
        if(!vis[g[v][i]])dfs(g[v][i],numb+1); 
    }
    
}


 
void siuu(){
    ll n,k ; cin >> n>>k;
    vll a(n),b(n),pl(n+1),pr(n+1,0);
    fl(0,n)cin >> a[i];
    fl(0,n)cin>>b[i];
    if(k%2==0){
        ll cr=0,mx=LLONG_MIN;
        for(ll x:a){
            cr=max(x,cr+x);
            mx=max(mx,cr);
        }
        cout << mx<< endl;return;
    }

    ll cr=0,mx=LLONG_MIN;
    fl(0,n){
        cr= max(a[i],cr+a[i]);    
        if(i>0)pl[i]=mx;
       
        mx= max(mx,cr);
    }
    
    cr=0,mx=LLONG_MIN;
    flr(i,n-1,0){
        cr= max(a[i],cr+a[i]);    
        if(i<n-1)pr[i]=mx;
        
        mx= max(mx,cr);
    }

    ll gg= max(pl[n-1]+a[n-1]+b[n-1],pr[0]+a[0]+b[0]);
    fl(1,n-1){
        gg= max(gg,pl[i]+pr[i]+a[i]+b[i]);
    }
    cout << gg<< endl;
    
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
