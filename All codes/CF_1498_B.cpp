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
 ll n , w;
vll v;


void siuu(){ 
    cin >> n >> w;
    v.resize(n,0);
    vll mm(32,0);
   // fl(0,n)
    fl(0,n){
        cin >> v[i];
        flj(0,32){
            if(v[i]&(1<<j)){
                mm[j]++;
                break;
            }
        }
    }
    ll ansi =0;
    while(n){
        ansi++;
        ll temp =0;
        ll gg=w;
        for(ll i=31;i>=0;i--){
            while((1<<i)<=gg && mm[i]>0){
                gg-= (1<<i);
                mm[i]--;
                n--;
            }
        }
    }
    cout << ansi << endl;

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