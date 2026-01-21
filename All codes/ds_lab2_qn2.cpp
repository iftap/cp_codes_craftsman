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
vector<bool> isprm(1e3+1,1);
void seive(){
    
}


void siuu(){ 
    string s; cin >> s;
    ll n = s.sz,cnt=0;
    bool gg=0;
    vll v;
    fl(0,n){
        if(s[i]=='a'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='e'){
            cnt++;
        }
        else{
            v.pb(cnt);
            cnt=0;
        }
    }
    if(cnt>0)v.pb(cnt);
    sort(rall(v));
    if(v[0]>2)gg=1;
    if(gg)cout << "HAPPY\n";
    else cout << "SAD\n";

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
