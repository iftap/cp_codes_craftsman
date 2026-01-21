#include <bits/stdc++.h> 
#include <bitset>
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
    ll n,m ,k;cin >> n >> m >>  k;
    vll r(n),o(m);
    fl(0,n)cin>> r[i];
    fl(0,m)cin >> o[i];
    sort(all(o));
    map<ll,ll>mpl,mpr,dis;
    fl(0,n){
        ll dd = upper_bound(o.begin(),o.end(),r[i])-o.begin();
        if(dd<m)mpr[o[dd]-r[i]]++;
        if((dd-1)>=0)mpl[r[i]-o[dd-1]]++;
        if((dd<m)&&((dd-1)>=0))dis[o[dd]-o[dd-1]]++;

    }
    string s ; cin >> s;
    ll ml=0,mr=0,pp=0,ansi=0;
    fl(0,k){
        if(s[i]=='L'){
            pp--;
            if(pp<ml){
                ansi+=mpl[-pp];
                ml= min(pp,ml);
                ll ds = mr-ml;
                ansi-= dis[ds];
            }
            ml= min(pp,ml);
        }
        else{
            pp++;
            if(pp>mr){
                ansi+=mpr[pp];
                // mr= max(pp,mr);
                // ll ds = mr-ml;
                // ansi-= dis[ds];
            }
            mr= max(pp,mr);
        }
        cout << n-ansi<<' ';
        
    }
    cout << endl;
    

} 
 
int main() { 
    ios::sync_with_stdio(false); 
    cin.tie(nullptr); 
    //seive();
    ll t=1;  
    cin >> t; 
    while (t--) { 
        siuu(); 
    } 
 
    return 0; 
}