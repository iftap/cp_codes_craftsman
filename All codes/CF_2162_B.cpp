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
    ll n ,k; cin >> n  ; 
    vll v(n); 
    vll gg; 
    map<ll,ll> mp; 
    fl(0,n) { 
        cin >> v[i]; 
        
    } 
    ll maxi =0; 
    fl(0,n){ 
        ll temp =1; 999+9
        flj(j,n){ 
            temp*=v[j]; 
            maxi = max(maxi,temp); 
        } 
    } 
    cout << maxi << endl; 
 
 
    
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