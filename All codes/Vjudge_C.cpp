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
static const int N = 1e9 +7;
vll pr_div;
ll M=20000000;
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
    string a;
    while(cin>>a){
    fl(0,a.sz){
            if(i==0){
            if(a[i]=='B' || a[i]=='F'|| a[i]=='P' || a[i]=='V')cout<<"1";
            
            if(a[i]=='C'||a[i]=='G'||a[i]=='J'||a[i]=='K'||a[i]=='Q'||a[i]=='S'||a[i]=='X'||a[i]=='Z') cout<<"2";
            
            if (a[i]=='D' || a[i]=='T') cout<<"3";
            if (a[i]=='L')cout<<"4";
            if (a[i]=='M' || a[i]=='N')cout<<"5";
            if (a[i]=='R')cout<<"6";
           }
           else{
           if(a[i]=='B' || a[i]=='F'|| a[i]=='P' || a[i]=='V'){
                if(a[i-1]!='B' && a[i-1]!='F' && a[i-1]!='P' && a[i-1]!='V')cout<<"1";
            }
            if(a[i]=='C'||a[i]=='G'||a[i]=='J'||a[i]=='K'||a[i]=='Q'||a[i]=='S'||a[i]=='X'||a[i]=='Z'){
                 if(a[i-1]!='C' && a[i-1]!='G' && a[i-1]!='J' && a[i-1]!='K'&& a[i-1]!='Q'&& a[i-1]!='S' && a[i-1]!='X' && a[i-1]!='Z')cout<<"2";
            }
            if (a[i]=='D' || a[i]=='T'){
                 if(a[i-1]!='D' && a[i-1]!='T') cout<<"3";
            }
            if (a[i]=='L'){
                 if(a[i-1]!='L') cout<<"4";
            }
            if (a[i]=='M' || a[i]=='N'){
                 if(a[i-1]!='M' && a[i-1]!='N')cout<<"5";
            }
            if (a[i]=='R'){
                 if(a[i-1]!='R')cout<<"6";
            }
        }
        }
        cout<<endl;
    }

}
 //1000000
int main() { 
    ios::sync_with_stdio(false); 
    cin.tie(nullptr); 
    //seive();
    ll t=1;  
    //cin >> t; 
    while(t--){
        siuu();
    }
 
    return 0; 
}



