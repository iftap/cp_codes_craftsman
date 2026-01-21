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
ll M=33001;
vector<bool> isprm(M+9,1);
void seive(){
    isprm[0] = isprm[1] = 0;
    for(ll i =2;i*i<M;i++){
        if(isprm[i]){
            for(ll j = i*i;j<M;j+=i){
                isprm[j]=0;
            }
        }
    }
    fl(2,M){
        if(isprm[i])pr_div.pb(i);
    }
}
vll ansi;
void siuu(){
    vector<vector<ll>> dp;
    fl(0,pr_div.sz-2){
        if(pr_div[i+1]-pr_div[i]==pr_div[i+2]-pr_div[i+1]){
            ll dif = pr_div[i+1]-pr_div[i];
            dp.pb(vll(1,pr_div[i]));
            while(i<pr_div.sz-1 && pr_div[i+1]-pr_div[i]==dif)dp.back().pb(pr_div[++i]);
            i--;
        }
    }
    ll l , r; 
    while(cin >>l>>r){
        if(l>r)swap(l,r);
    for(auto x:dp){
        if(l<=x.front() && x.back()<=r){
            fl(0,x.sz-1)cout << x[i]<<' ';
            cout<<x[x.sz-1] << endl;
        }
    }
    }
    
    
} 
 
int main() { 
    ios::sync_with_stdio(false); 
    cin.tie(nullptr); 
    seive();
    
    ll t=1;  
    //cin >> t; 
    while (t--) { 
       siuu(); 
    } 
    //fl(1,1000000){
       //cout << i << ' '<< isprm[i]<< ' '<<good[i]<<' '<< maxi[i]<<' '<<ansi[i]<<endl;
   // }
 
    return 0; 
}