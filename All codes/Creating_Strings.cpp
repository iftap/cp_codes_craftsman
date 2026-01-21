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

vector<string> st;
map<string,ll>mp;
void gg(vector<char> ch,string s){

if(ch.sz==1){
	st.pb(s+ch[0]);
    return;
}
fl(0,ch.sz){
	vector<char> cc;
    flj(0,ch.sz){
    	if(i==j) continue;
        cc.pb(ch[j]);
    }
   // s+=ch[i];
    gg(cc,s+ch[i]);
}
}

void siuu(){
    string s; cin >> s ; 
    ll n = s.sz;
    ll ansi =0;
   

    
    //cout << ansi << endl;
    vector<char> cc;
    fl(0,n){
        cc.pb(s[i]);
    }
    gg(cc,"");
    vector<string> final;
	fl(0,st.sz){
        mp[st[i]]++;
        if(mp[st[i]]==1)final.pb(st[i]);
    }
    cout << final.sz<< endl;
    fl(0,final.sz)cout <<final[i]<< endl;

} 
 
int main() { 
    ios::sync_with_stdio(false); 
    cin.tie(nullptr); 
    
    ll t=1;  
    //cin >> t; 
    while (t--) { 
        siuu(); 
    } 
 
    return 0; 
}