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
ll N= 2*1e5+1;



void siuu(){
    ll n ,k,q; cin >> n >> k >> q;
    vll v(n+1,k);
    vector<pair<ll,ll>>p;
    map<ll,ll> mned,mxed;
    fl(0,q){
        ll a,b,c;cin >>a >> b >> c;
        if(a==1){
            flj(b-1,c)mned[j]=1;
        }
        else{
            flj(b-1,c)mxed[j]=1;
        }
    }
    
    fl(0,n){
        if(mned[i]==1&& mxed[i]==1){
            v[i]= k+1;
        }
        else if(mned[i]==1)v[i]=k;
        else v[i]=i%k;
    }
    fl(0,n)cout << v[i]<<' ';
    cout << endl;



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

