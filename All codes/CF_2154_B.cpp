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
    ll n ; cin >> n ;
    vll v(n+1),mx(n+2);
    ll maxi=0;
    fl(1,n+1){
        cin >> v[i];
        maxi= max(v[i],maxi);
        mx[i]=maxi;
    } 
    v.pb(0);
    ll gg =0;
    if(n%2==0)gg= n-1;
    ////nn
    else gg= n-2;
    ll ans =0;
    for( ll i = 2; i<=n;i+=2){
        ll temp =0;
        if(mx[i]<=v[i-1])temp+=(v[i-1]-mx[i]+1);
        if(mx[i]<=v[i+1])temp+=(v[i+1]-mx[i]+1);

        ll t2=0;
        if(v[i]<=v[i-1])t2+=(v[i-1]-v[i]+1);
        if(v[i]<=v[i+1])t2+=(v[i+1]-v[i]+1);
        ans+= min(temp,t2);
        if(temp<=t2){
            v[i-1]= min(mx[i]-1,v[i-1]);
            v[i+1]= min(mx[i]-1,v[i+1]);

        }
        else{
            v[i-1]= min(v[i]-1,v[i-1]);
            v[i+1]= min(v[i]-1,v[i+1]);
        }
    }
    cout << ans << endl;
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