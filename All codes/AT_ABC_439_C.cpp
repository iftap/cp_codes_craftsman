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



///  
/*

mainly 2 ta array ekta sum 

arekta oi elemnt ta asce kina




*/
ll nn ;
class SEGT{
vll seg;
public:
SEGT(ll n ){
    seg.resize(4*(n+1)+1,0);
}
void build(ll ind,ll low,ll high){
    if(low==high){
        seg[ind]=1;
        //if(low=nn)seg[ind]=0;
        return;
    }
    
    ll mid= (low+high)/2;
    build(2*ind+1,low ,mid);// lower left
    build(2*ind+2,mid+1,high);
    seg[ind]= seg[2*ind+1]+seg[2*ind+2];// eta func call er pore hobe chill,,value already set nicher gula
    
}

ll query(ll ind,ll low,ll high ,ll l ,ll r ){
// low ,high hocche oi segment er low high ,, l r hocche query range 

// no overlap, baire
if(r<low ||high<l)return 0;
// complete overlap
if(low>=l && high<=r) return seg[ind];// karon baki kono ongso thakle oitar ta upore push korbe 

//partial overlap
ll mid = (low+high)>>1;
ll left = query(2*ind+1,low,mid,l,r);
ll right =query(2*ind+2,mid+1,high,l,r);
return left+right;

}

void update(ll ind,ll low,ll high,ll in ){
    if(low==high){
        seg[ind]=0;
        return;
    }
    ll mid = (high+low)>>1;
    if(in<=mid)update(2*ind+1,low,mid,in);
    else update(2*ind+2,mid+1,high,in);
    seg[ind]= seg[2*ind+1]+seg[2*ind+2];
}
};


void siuu(){
    ll n ; cin >> n;
    vector<int> mp(n+1,0);
    set<ll> st;
    for(ll i = 2; i*i<n;i++){
        for(ll j = 1;j<i;j++){
            ll gg = i*i + j* j;
            if(gg>n)break;
            mp[gg]++;
            //st.insert(gg);
        }
    }
    vll ansi;
    fl(2,n+1){
        if(mp[i]==1)ansi.pb(i);
    }
    sort(all(ansi));
    cout << ansi.sz<< endl;
    fl(0,ansi.sz)cout << ansi[i]<<' ';
    

} 
 
int main() { 
    ios::sync_with_stdio(false); 
    cin.tie(nullptr); 
    //seive();
    ll t=1;  
    //cin >> t; 
    while (t--) { 
        siuu(); 
    } 
 
    return 0; 
}

