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
    string s; cin >> s;
    vll v;
    ll cnt=0;
    fl(0,s.sz){
        if(s[i]=='o'){
            if(cnt>1)v.pb(cnt-1);
            cnt=0;
            v.pb(-1);
        }
        else cnt++;
        
    }
    if(cnt>1)v.pb(cnt-1);
    ll n = v.sz;
    vll ls(n+1,0),rs(n+1,0);
    fl(0,n){
        ls[i+1]=ls[i];
        if(v[i]!=-1)ls[i+1]+=v[i];
    }
    //reverse(all(v));
    for(ll i = n-1;i>=0;i--){
        rs[i]=rs[i+1];
        if(v[i]!=-1)rs[i]+=v[i];
    }
    //reverse(all(rs));
    ll ansi=0;
    fl(1,n){
        if(v[i-1]==-1){
            ansi+=(ls[i]*rs[i-1]);
        }
    }
    cout << ansi << endl;
} 
 
int main() { 
    ios::sync_with_stdio(false); 
    cin.tie(nullptr); 
   // seive();
    ll t=1;  
    //cin >> t; 
    while (t--) { 
        siuu(); 
    } 
 
    return 0; 
}
