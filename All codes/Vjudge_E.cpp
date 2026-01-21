#include <bits/stdc++.h> 
using namespace std; 
#define all(v) v.begin(), v.end() 
#define rall(v) v.rbegin(), v.rend() 
#define cy cout << "YES\n" 
#define cn cout << "NO\n" 
#define fl(s,e) for(int i=s;i<e;i++) 
#define flj(s,e) for(int j=s;j<e;j++) 
#define vll vector<ll> 
#include<numeric> 
#define sz size()
typedef long long       ll;
typedef long double     ld;
typedef vector<int>     vi;
typedef vector<vi>      vvi;
typedef vector<vll>     vvll;
typedef vector<bool>    vb;
typedef vector<vb>      vvb;
typedef pair<int, int>  pi;
typedef vector<pi>      vpi;
typedef pair<ll, ll>    pll;
typedef vector<pll>     vpll;
#define pb              push_back
#define ff              first
#define ss              second
#define flr(i, a, b)    for(ll i = (a); i >= (b); i--)
#define lcm(a, b)       ((a / __gcd(a, b)) * b)
vll v1,v2;
ll n ;
static const int N = 200001;
vll pr_div;
ll M=1000000;
vector<bool> isprm(M+9,1);
void seive(){
    isprm[0] = isprm[1] = 0;
    for(ll i =2;i*i<M;i++){
        if(isprm[i]){
            for(ll j = i*i;j<=M;j+=i){
                isprm[j]=0;
            }
        }
    }
    fl(2,M){
        if(isprm[i])pr_div.pb(i);
    }
}


 
void siuu(){
    string s;
    while(cin>>s){
    deque<char>dqe;
    string nw="";
    bool gg=0;

    fl(0,s.sz){
        if(s[i]==']'){
            if(gg==1) for(ll j=nw.size()-1;j>=0;j--) dqe.push_front(nw[j]);
            else for(ll j=0;j<nw.size();j++) dqe.push_back(nw[j]);

            nw="";
            gg=0;
        }
        else if(s[i]=='['){
            if(gg==1) for(int j=nw.size()-1;j>=0;j--) dqe.push_front(nw[j]);
            else for(int j=0;j<nw.size();j++) dqe.push_back(nw[j]);
                nw="";
                gg=1;
            }
        else nw+=s[i];
            
    }

        if(gg==1)for(ll j=nw.size()-1;j>=0;j--) dqe.push_front(nw[j]);
        else for(ll j=0;j<nw.size();j++)dqe.push_back(nw[j]);

        nw="";

        char p;
        while(!dqe.empty()){
            cout << dqe.front();
            dqe.pop_front();
        }
        cout << endl;
    }


}
 //1000000
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

