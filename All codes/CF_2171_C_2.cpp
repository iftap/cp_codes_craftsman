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


void siuu(){
    ll n ; cin >> n ;
    vll a(n),b(n);
    ll gg=0;
    fl(0,n) cin >> a[i];
    
    fl(0,n) cin >> b[i];

    ll aa=0,bb=0;
    fl(0,n){
        gg^=a[i];
        gg^=b[i];
    }
    if(gg==0){
        cout <<"Tie\n";return;
    }
    ll tt;
    fl(0,30){
        if(gg& (1<<i))tt=(1<<i);
    }
    fl(0,n){
        a[i]&=tt;
        b[i]&=tt;
    }
    fl(0,n){
        if(a[i]!=b[i])gg=i+1;
    }
    if(gg%2)cout << "Ajisai\n";
    else cout << "Mai\n";


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

