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

 ll t;
ll xx=0;
void siuu(){ 
    xx++;
    ll n ; cin >> n;
    vll v(n,0);
    map<ll,ll> fq,fqq;
    fl(0,n) {
        cin >> v[i];
        fqq[v[i]]++;
    }
    bool gg= 0 ;
    vll bg(n+1,0),sm(n+1,LLONG_MAX);
    bg[0]=v[0];
    fl(1,n){
        bg[i]= max(bg[i-1],v[i]);
    }
    cout << "Case "<< xx<< ": ";        
    if(n==1){
        cout << 1 << endl; return;
    }                
    sm[n-1]=v[n-1];
    for(ll i = n-2;i>=0;i--){
        sm[i]= min(sm[i+1],v[i]);
    }
    ll ansi ;
    
    fl(0,n){
        fq[v[i]]++;
        fqq[v[i]]--;
        if(sm[i]==v[i]&& bg[i]==v[i]){
            if(fq[v[i]]==1 && fqq[v[i]]==0) {
                gg=1;
                ansi = i+1;
                break;
            }
            
            
        }
    }
    if(gg){
        cout << ansi << endl; return;
    }
    
    cout << "Humanity is doomed!\n";


} 

int main() { 
    ios::sync_with_stdio(false); 
    cin.tie(nullptr); 
    
   // ll t=1;  
    cin >> t; 
    while (t--) { 
        siuu(); 
    } 
 
    return 0; 
}

