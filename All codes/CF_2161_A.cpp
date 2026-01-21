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
vector<bool> isprm(1e4+1,1);
void seive(){
    isprm[0] = isprm[1] = 0;
    for(ll i =2;i*i<=1e4;i++){
        if(isprm[i]){
            for(ll j = i*i;j<=1e4;j+=i){
                isprm[j]=0;
            }
        }
    }
    fl(2,1e4){
        if(isprm[i])pr_div.pb(i);
    }
}


void siuu(){ 
    ll x,X,d,n;cin >> x >> X >>d >> n ;
    string s ; cin >> s;
    if(x<X){
        cout << n << endl;return;
    }
    ll cnt=0;
    
    fl(0,n){
        if(s[i]=='1'){
            x-=d;
            cnt++;
            if(x<X){cout <<cnt+ (n-i-1)<<endl;return;}
        }
    }
    cout <<  cnt << endl;

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
