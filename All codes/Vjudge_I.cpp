#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define cy cout << "YES\n"
#define cn cout << "NO\n"
#define fl(s,e) for(int i=s;i<e;i++)
#define vll vector<ll>
#include<numeric>
#define sz size()

 vll v;
 vll sm;
 vector<bool>isp(1e6+1,1);
void seive(){
    isp[0]=isp[1]=0;
    for(ll i =2;i*i<=1e6;i++){
        if(isp[i]){
            for(ll j =i*i;j<=1e6;j+=i)isp[j]=0;
        }
    }
    fl(2,1e6){
        if(isp[i])v.pb(i);
    }
}
void ottarmarebap(){
   ll n;cin >> n;
   
   if(isp[n]){
    return;
   }
   for(auto u:v){
    if(u*u>n)break;
    ll temp =1;
    while(n%u==0){
        
        n/=u;
    }
    
   }
  
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    seive();
    ll t=1; 
    sm.resize(v.sz,1);
    cin >> t;
    while (t--) {
        ottarmarebap();
    }

    return 0;
}