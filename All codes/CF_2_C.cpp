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
class SEGT{
vector<pair<ll,ll>> seg;
public:
SEGT(ll n ){
    seg.resize(4*n+1);
}
void build(ll ind,ll low,ll high,vll &arr){
    if(low==high){
        seg[ind].ff=arr[low];
        seg[ind].ss=1;
        return;
    }
    
    ll mid= (low+high)/2;
    build(2*ind+1,low ,mid,arr);// lower left
    build(2*ind+2,mid+1,high,arr);
    //seg[ind].ff= min(seg[2*ind+1].ff,seg[2*ind+2].ff);// eta func call er pore hobe chill,,value already set nicher gula
    if(seg[2*ind+1].ff==seg[2*ind+2].ff){
        seg[ind].ss=seg[2*ind+1].ss+seg[2*ind+2].ss;
        seg[ind].ff=seg[2*ind+1].ff;
    }
    else if(seg[2*ind+1].ff<seg[2*ind+2].ff){
        seg[ind].ss=seg[2*ind+1].ss;
        seg[ind].ff=seg[2*ind+1].ff;
    }
    else{
         seg[ind].ss=seg[2*ind+2].ss;
        seg[ind].ff=seg[2*ind+2].ff; 
    }
}

pair<ll,ll> query(ll ind,ll low,ll high ,ll l ,ll r ){
// low ,high hocche oi segment er low high ,, l r hocche query range 

// no overlap, baire
if(r<low ||high<l)return {-1,-1};
// complete overlap
if(low>=l && high<=r) return seg[ind];// karon baki kono ongso thakle oitar ta upore push korbe 

//partial overlap
ll mid = (low+high)>>1;
auto left = query(2*ind+1,low,mid,l,r);
auto right =query(2*ind+2,mid+1,high,l,r);
if(left.ff==right.ff)return{left.ff,left.ss+right.ss};
if(left.ff==-1){return right;}
if(right.ff==-1)return left;

if(left.ff<right.ff)return left;
else return right;

}

void update(ll ind,ll low,ll high,ll in ,ll val ){
    if(low==high){
        seg[ind]={val,1};
        return;
    }
    ll mid = (high+low)>>1;
    if(in<=mid)update(2*ind+1,low,mid,in,val);
    else update(2*ind+2,mid+1,high,in,val);
    if(seg[2*ind+1].ff==seg[2*ind+2].ff){
        seg[ind].ss=seg[2*ind+1].ss+seg[2*ind+2].ss;
        seg[ind].ff=seg[2*ind+1].ff;
    }
    else if(seg[2*ind+1].ff<seg[2*ind+2].ff){
        seg[ind].ss=seg[2*ind+1].ss;
        seg[ind].ff=seg[2*ind+1].ff;
    }
    else{
         seg[ind].ss=seg[2*ind+2].ss;
        seg[ind].ff=seg[2*ind+2].ff; 
    }
}
void merge(ll par,ll lef ,ll rig){

}
};




void siuu(){
    ll n1,q; cin >> n1>>q;
    vll v1(n1);
    fl(0,n1)cin >> v1[i];
   
    SEGT s1(n1);
     s1.build(0,0,n1-1,v1);
    // auto gg=s1.query(0,0,n1-1,0,n1-1);
    //         cout << gg.ff<<' '<<gg.ss<<endl;
   
    while(q--){
         ll typ; cin >> typ;
         if(typ==1){
             ll in , val; cin >> in >> val;

         s1.update(0,0,n1-1,in,val);
             v1[in]=val;
         }
         else{
             ll l, r; cin >> l >> r;
            auto gg=s1.query(0,0,n1-1,l,r-1);
            cout << gg.ff<<' '<<gg.ss<<endl;
         }
     }
    
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

