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
    ll n , s; cin >> n ;
    vll v(n);
    fl(0,n)cin >> v[i];
    sort(all(v));
    ll ansi =0;
    ll gg= v[0];
    vll tt;
    ll cnt=0;
    map<ll,ll>mp;
    fl(1,n){
        if(v[i]==gg){
            mp[v[i]]++;
            if(mp[v[i]]==1){
                tt.pb(gg);
            }
            
            continue;
        }
        if(v[i]!=(gg+1))ansi++;
        gg=v[i];
    }
    sort(rall(tt));
    //if(tt.sz>0)ansi+=tt[]
    
    cout <<  ansi << endl;

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
