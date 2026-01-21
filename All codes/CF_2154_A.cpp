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
    ll n , k ; cin >> n >> k ; 
    string s ; cin >> s;
    ll ansi =0;
    vll v(n+1,0),pf(n+1,0);
    fl(0,n){
        if(s[i]=='1')v[i]=1;
    }
    fl(0,n){
        if(s[i]=='1'){
            if(i==0){
                ansi++;
                //s[i]='0';
                continue;
            }
            bool gg = 0;
            for(ll j = max(0LL,i-k+1);j<i;j++){
                // 5 4

                if (s[j]=='1'){gg=1;break;}
            }
            if(!gg)ansi++;
            //s[i]='0';
        }
    }
    cout << ansi << endl;

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