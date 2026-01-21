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
    string s1, s2; cin >> s1 >> s2;
    if(s1.sz!=s2.sz){
        cn;return;
    }
    map<char,ll>m1,m2;
    fl(0,s1.sz){
        m1[s1[i]]++;
        m2[s2[i]]++;
    }
    bool gg=1;
    fl(0,s1.sz){
        if(m1[s1[i]]!=s2[i]){gg=0;break;}
    }
    if(gg)cy;
    else cn;

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
