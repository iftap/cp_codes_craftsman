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

 
void siuu(){
    ll n ; cin >> n ;
    vll v(n);
    vll neg(n+1),pos(n+1);
    
    fl(0,n){
        cin >> v[i];
    }
    vll vv = v;
    pos[0]=v[0];
    ll gg=0;
    fl(0,n-1){
        if(vv[i]>=0){
            if(vv[i+1]<0){
            gg-=vv[i+1];
            
            pos[i+1]=gg+vv[i];
            swap(vv[i],vv[i+1]);
            }
            else{
            gg+=vv[i];
            pos[i+1]= gg+vv[i+1];
            }
        }
        else{

            if(vv[i+1]<0){
            gg-=vv[i+1];
            
            pos[i+1]=gg+vv[i];
            swap(vv[i],vv[i+1]);
            }
            else{
                gg+=vv[i];
            pos[i+1]= gg+vv[i+1];
            }
            // gg-=vv[i+1];
            
            // pos[i+1]=gg+vv[i];
            // swap(vv[i],vv[i+1]);
        }
        
    }
    
    for(ll i = n-1;i>=0;i--){
        //if(i<(n-1)){
            neg[i]=neg[i+1];
        //}
        neg[i]-=v[i];
    }
    ll ansi =LLONG_MIN;
    fl(1,n-1){
        ansi=max(ansi,pos[i-1]+neg[i+1]);
    }
    ansi = max(ansi,neg[1]);
    ansi = max(ansi,pos[n-2]);
    cout << ansi << endl;
    //fl(0,n)cout << pos[i]<<' ';
 
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

