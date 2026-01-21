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
const int N= 5e5+1;

void siuu(){
    ll n ,k;
    cin >> n >> k ;
    ll gg = 0;
    if(k==1){
        cout << n << endl;return;
    }
    
    if(k%2){
        fl(0,k)cout <<  n << ' ';
        cout << endl;return;
    }
    fl(0,k-2)cout <<  n << ' ';
    
    ll gm=0;
    ll msb = 63- __builtin_clzll(n),sec=-1;
    for(ll i=msb-1;i>=0;i--){
        if((1LL<<i)&n){
            sec=i;break;
        }
    }
    ll ansi =0;

    if(sec==-1){
        cout << n << " 0\n";return;
    }
    fl(0,sec+1){
        
           ansi|=(1LL<<i);
       
    }
    //cout << ansi <<' ';
    ll ansi2=0;

















    
    fl(0,sec){
        if((1LL<<i)&n)continue;
        
           ansi2|=(1LL<<i);
       
    }
    ansi2 |= (1LL<<msb);

    
     cout << ansi<<' '<<ansi2 << endl;
    
    
    //ll ggt =38^15;
    //cout << ggt << endl;
} 
 
int main() { 
    ios::sync_with_stdio(false); 
    cin.tie(nullptr); 
    
    ll t=1;  
    //cin >> t; 
    while (t--) { 
        siuu(); 
    } 
 
    return 0; 
}

