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
vector<bool> isprm(1e4+1,1);
void seive(){
    isprm[0] = isprm[1] = 0;
    for(ll i =2;i*i<=1e4;i++){
        if(isprm[i]){
            for(ll j = i*i;j<=1e4;j+=i){
                isprm[j]=0;
            }
        }
    }
    fl(2,1e4){
        if(isprm[i])pr_div.pb(i);
    }
}


void siuu(){ 
    ll n , k; cin >> n >> k ;
    vll v(n,0),gg(k+1,-1),ansi(k+1,-1);
    fl(0,n){
        cin >> v[i];
        //if(gg[v[i]]==-1) gg[v[i]]= i;
       // else{
            ansi[v[i]]= max(ansi[v[i]],i-gg[v[i]]-1);
            gg[v[i]]= i;
        //}
    }
    fl(1,k+1){
        ansi[i]=max(ansi[i],n-gg[i]-1);
    }
    sort(all(ansi));
    fl(0,k+1){
        if(ansi[i]!=-1){
            cout << ansi[i]<<endl; return;
        }
    }


} 
 
int main() { 
    ios::sync_with_stdio(false); 
    cin.tie(nullptr); 
    seive();
    ll t=1;  
    cin >> t; 
    while (t--) { 
        siuu(); 
    } 
 
    return 0; 
}
