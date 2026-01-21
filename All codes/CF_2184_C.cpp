#include <bits/stdc++.h> 
#include <bitset>
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



///  

ll ansi;
map<ll,bool>mp;
ll n , k;
bool gg = 0;
void ss(ll x,ll par){
    if(x<k  || mp[x] || gg)return;
    mp[x]=1;
    if(x==k){
        gg= 1;ansi = par; return;
    }
    if(x%2){
        ss(x/2,par+1);
        ss(x/2 +1,par+1);
    }
    else ss(x/2,par+1);
}

void siuu(){
    cin >> n >>  k ;
    if(n<k){
        cout <<-1<< endl;return;
    }
    if(n==k){
        cout << 0 << endl ;return;
    }
    mp.clear();
    //vll v;
    gg=0;
    ss(n,0);
    if(gg)cout << ansi << endl;
    else cout <<-1<< endl;


} 
 
int main() { 
    ios::sync_with_stdio(false); 
    cin.tie(nullptr); 
    //seive();
    ll t=1;  
    cin >> t; 
    while (t--) { 
        siuu(); 
    } 
 
    return 0; 
}

