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
const int N = 1e9 +7;



void siuu(){
    ll n ; cin >> n ;
    map<ll,ll> mp;
    ll ansi =0;
    vll v(n);
    fl(0,n)cin >> v[i],mp[v[i]]++;
    ll nd= v[0];
    fl(0,n)nd&=v[i];
    if(mp[nd]<2){cout << "0\n";
    return;}

    ansi += (mp[nd]*(mp[nd]-1))%N;
        ll gg = n-2;
        //if(mp[nd]>2)
    fl(1,n-1){
        ansi = (ansi*gg)%N;
        gg--;
    }
    cout << ansi << endl;

}
 //1000000
int main() { 
    ios::sync_with_stdio(false); 
    cin.tie(nullptr); 
    //seive();
    ll t=1;  
    cin >> t; 
    while(t--)siuu();
    
 
    return 0; 
}
