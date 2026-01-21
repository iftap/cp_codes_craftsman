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
    ll a , b; cin >> a >> b;
    
    
    if(a>b)swap(a,b);
    if(a==0 ||b==0){
        if(a==b)cy;
        else cn;
        return;
    }
    ll gg =2*a-b;
    if(gg<0){
        cn;return;
    }
    if(gg%3==0)cy;
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

