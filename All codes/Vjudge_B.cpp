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

ll n ;
const int N = 1e5 +7;
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
vll depth(N,0),height(N,0);
vector<ll> g[N];
vector<bool> vis(N,0);
void tree_hd(ll node,ll par){
    vis[node]=1;
    for(ll c:g[node]){
        if(c== par)continue;
        depth[c]=depth[node]+1;
        tree_hd(c,node);
        height[node]=max(height[node],height[c]+1);
    }
}


void siuu(){
    ll n ; cin >> n ;
    vll a(n+1),b(n+1);
    map<ll,bool> mp;
    ll cnt =0,ans=0;
    fl(1,n+1)cin >> a[i];
    fl(1,n+1)cin >> b[i];
    vll c(n+1);
    fl(1,n+1) c[b[i]]=i;
     cnt =c[a[1]];
     fl(1,n+1){
        if(c[a[i]]<cnt)ans++;
        cnt= max(cnt,c[a[i]]);
     }
    cout << ans <<endl;

}
 //1000000
int main() { 
    ios::sync_with_stdio(false); 
    cin.tie(nullptr); 
    //seive();
    ll t=1;  
    //cin >> t; 
    
        siuu();
    
 
    return 0; 
}
