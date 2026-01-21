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

 
ll nn =1;
ll t;
 
void siuu(){
    ll n;cin>>n;
    vector<string> ss(n);
    fl(0,n)cin >> ss[i];
    sort(all(ss));

    bool gg = true;

    fl(0,n-1){
        if(ss[i+1].find(ss[i])== 0){
            gg= 0;break;
        } 
    }
    cout<<"Case "<<nn<<": ";
    if(gg) cy;
    else cn;
    

}
 
int main() { 
    ios::sync_with_stdio(false); 
    cin.tie(nullptr); 
    
    //ll t=1;  
    cin >> t; 
    while (t--) { 
        siuu(); 
        nn++;
    } 
 
    return 0; 
}

