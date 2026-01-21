#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define cy cout << "YES\n"
#define cn cout << "NO\n"
#define fl(s,e) for(int i=s;i<e;i++)
#define vll vector<ll>
#include<numeric>
#define sz size()

 vll v;
 vll mp;
 vector<bool>isp(1e6+1,1);
void seive(){
    isp[0]=isp[1]=0;
    for(ll i =2;i*i<=1e6;i++){
        if(isp[i]){
            for(ll j =i*i;j<=1e6;j+=i)isp[j]=0;
        }
    }
    fl(2,1e6){
        if(isp[i])v.pb(i);
    }
}
ll hqhq=0;
ll tempo=0,ansi =1;
bool siuu=0,pitbul=0;
void ottarmarebap(){
   ll n;cin >> n;
    
   
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    seive();
    mp.resize(v.sz,0);
    ll t=1; 
    cin >> t;
    ll an =0;
    while (t--) {
        ll n; cin >> n;
        an= __gcd(an,n);
    }
    //ll ansi=1;
    fl(0,v.sz){
        ll temp=0;
        while(an%v[i]==0){
            temp++;
            an/=v[i];
        }
        ansi*= (temp+1);
        
    }
    
    cout << ansi << endl;
    return 0;
}


