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
    string s;
    ll n ; cin >> n>>s ;
    if(n%2){
        cout <<"-1\n";return;
    }
    ll gg = 0 ;
    ll r=0,l=0;
    fl(0,n){
        if(s[i]=='(')r++;
        else l++;
    }
    if(r!=l){
        cout <<"-1\n";return;
    }
    vll v(n,0);
    bool rr=0;
    if(s[0]==')'){
        reverse(all(s));
        rr=1;
    }
    bool wrect=0;
    fl(0,n){
        if(s[i]=='(')gg++;
        else gg--;
        if(gg<0)wrect=1;
        if(gg>0){
            v[i]=1;
            wrect =0;
        }
        else if(gg==0){
            v[i]=v[i-1];
        }
        else v[i]=2;
    }
    
    



    vll tt=v;
    sort(rall(tt));
    ll ansi =1;
    if(tt[0]!=tt[n-1])ansi++;
    else{
        if(tt[0]==2){
            fl(0,n)v[i]=1;
        }
    }
    cout << ansi << endl;
    if(rr)reverse(all(v));
    fl(0,n)cout << v[i]<<' ';
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

