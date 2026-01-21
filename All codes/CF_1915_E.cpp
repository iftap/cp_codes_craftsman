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
vll pr_div;
vector<bool> isprm(2*1e5+1,1);
void seive(){
    isprm[0] = isprm[1] = 0;
    for(ll i =0;i*i<=2*1e5;i++){
        if(isprm[i]){
            for(ll j = i*i;j<=2*1e5;j+=i){
                isprm[j]=0;
            }
        }
    }
    fl(2,2*1e5){
        if(isprm[i])pr_div.pb(i);
    }
}


void siuu(){ 
    ll n ; cin >>n;
    vll v(n);
    fl(0,n) cin >> v[i];
    map<ll,ll> mp1,mp2;
    bool trigger =0;
    ll gg =0;
    mp1[gg]++;
    fl(0,n){
        if(i%2)gg+=v[i];
        else gg-=v[i];
        if(mp1[gg]){
            trigger =1;
            break;
        }
        mp1[gg]++;
    }
    if(mp1[gg]>1)trigger =1;
    if(trigger)cy;
    else cn;


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