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
    string gg=s;
    ll n = s.sz;
    reverse(all(gg));
    if(gg==s){
        cout << gg << endl;return;
    }

    ////  akjhfj
    ll tr= 0;
    bool tt=0;
        string tem;
        tem+=s[0];
        flj(1,n){
        tem+=s[j];
        string t2= tem;
        reverse(all(t2));
        if(t2==tem) tt=1;
        if(t2!=tem){
            tr=j-1;
            break;
        }
        
    }
    
    if(tt){
        fl(0,n-tr-1)cout<<gg[i];
        cout << s <<endl;
    }
    else cout << gg<<s<<endl;

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
 
    return 0; 
}
