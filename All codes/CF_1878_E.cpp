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
const int N= 5e5+1;

void siuu(){
    ll n ; cin >> n;
    vll v(n);
    vector<vector<ll>>pf(n+2,vll(32));
    fl(0,n){
        cin >> v[i];
        flj(0,32){
            pf[i+1][j]=pf[i][j];
            if(v[i]&(1<<j))pf[i+1][j]++;
        }
    }
    ll q;cin >> q;
    ll x,y,l,k,r,m;
    while(q--){
        cin >>x >> k;
        ll gr=-1;
        l= x,r= n;
        while(l<=r){
           
            m= l+(r-l+1)/2;
            vll gg(32,0);
            fl(0,32){
                gg[i]= pf[m][i]-pf[x-1][i];
            }
            ll ansi =0;
            fl(0,32){if(gg[i]==(m-x+1))ansi|=(1<<i);}
            if(ansi>=k){
                gr= m;
                l = m+1;
            }
            else{
                r=m-1;
            }
        }
        cout << gr << ' ';
        
        
    }
cout << endl;
    
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

