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
ll M=1e5;
vector<bool> isprm(M+9,1);
void seive(){
    isprm[0] = isprm[1] = 0;
    for(ll i =2;i*i<M;i++){
        if(isprm[i]){
            for(ll j = i*i;j<=M;j+=i){
                isprm[j]=0;
            }
        }
    }
    fl(2,M){
        if(isprm[i])pr_div.pb(i);
    }
}


void siuu(){
    ll n ; cin >> n ;
    map<ll,ll> mp;
    vll v;
    for(ll i =2;i*i<=n;i++){
        if(n%i==0 && mp[i]==0){
            v.pb(i);
            mp[i]++;
            n/=i;
            break;
        }
    }
    for(ll i =2;i*i<=n;i++){
        if(n%i==0 && mp[i]==0){
            v.pb(i);
            mp[i]++;
            n/=i;
            break;
        }
    }
    if(n>1 && mp[n]==0)v.pb(n);
    if(v.sz>=3){
        cy;
        for(auto x: v)cout << x << ' ';
        cout << endl;
    }
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
