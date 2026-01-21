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
    ll n; cin >>n ;
    ll c5=0;
    vll v(n);
    fl(0,n){
        cin >> v[i];
        if(v[i]%10==5 || v[i]%10==0){
            c5++;
            if(v[i]%10==5)v[i]+=5;
        }
        else{
            while(v[i]%10 !=2){
                v[i]+= v[i]%10;
                
            }
            v[i]%=20;
           // v[i]/=10;
            //v[i]%=2;
        }
    }
    if(c5>0){
        sort(all(v));
        if(v[0]==v[n-1])cy;
        else cn;
        return;
    }
    sort(all(v));
    if(v[0]==v[n-1])cy;
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