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
ll N= 1e5+1;
vll vis(N,0);
vector<vector<ll>> v;
vll ansi;

//bool gg =0;

void siuu(){
    ll n; cin >> n;
    ll a , b ; cin >> a >> b;
    a= abs(a);b= abs(b);
    ll f=0,e=0;
    string s; cin >> s; 
    fl(0,n){
        if(s[i]=='4')f++;
        else e++;
    }
    if(a>n){
        cn;return;
    }
    ll gg = n-a;
    
    gg+= e;
    if(gg>=b)cy;
    else cn;



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

