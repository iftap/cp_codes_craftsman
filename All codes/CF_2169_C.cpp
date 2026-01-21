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

 ll t;
ll xx=0;
void siuu(){ 
    ll n ; cin >> n ;
    vll v(n),pf(n+1,0);
    fl(0,n)cin >> v[i];
    ll gg = 2*n;
    ll ansi=0;

    fl(1,n){
        pf[i]=v[i-1]+pf[i-1];
    }
    ll lf=1,rf=n;
    reverse(all(v));
    v.pb(0);
    reverse(all(v));
    ansi = n* (n+1);
    //fl(1,n){
       while((ansi+pf[lf]-2 )>ansi){
        if(lf>n)break;
        ansi= (ansi+pf[lf]-2);
        lf++;
       }
    //}
    while((ansi+pf[rf]-2*n)>ansi){
        if(rf==0 )break;
        ansi= (ansi+pf[rf]-2*n);
        rf--;
       }
    
       cout << ansi << endl;


} 

int main() { 
    ios::sync_with_stdio(false); 
    cin.tie(nullptr); 
    
    // ll t=1;  
    cin >> t; 
    while (t--) { 
        siuu(); 
    } 
 
    return 0; 
}

