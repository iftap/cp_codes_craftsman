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
ll lcm(ll a,ll b) {
    return (a / gcd(a, b)) * b;
}

void siuu(){
    ll n; cin >>  n;
    vll v (n+1);
    fl(1,n+1) cin >> v[i];
    vll pf(n+2,0);
    ll ansi =0;
    fl(1,n+1){
        pf[i+1]=pf[i];
        if(v[i]<i)pf[i+1]++;
    }
    fl(2,n+1){
        if(v[i]<i){
            ansi+=pf[v[i]];
        }
    }
    cout << ansi << endl;
} 
 
int main() { 
    ios::sync_with_stdio(false); 
    cin.tie(nullptr); 
   // seive();
    ll t=1;  
    cin >> t; 
    while (t--) { 
        siuu(); 
    } 
 
    return 0; 
}
