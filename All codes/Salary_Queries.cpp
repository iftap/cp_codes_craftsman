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
ll ansi=0, maxi = LLONG_MAX,mini = LLONG_MAX;
class SEGT{
vector<pair<ll,ll>> seg;
public:
SEGT(ll n ){
    seg.resize(4*n+1);
}
void build(ll ind,ll low,ll high,vll &arr){
    if(low==high){
        seg[ind].ff=seg[ind].ss=arr[low];
        
        return;
    }
    
    ll mid= (low+high)/2;
    build(2*ind+1,low ,mid,arr);// lower left
    build(2*ind+2,mid+1,high,arr);
    //seg[ind].ff= min(seg[2*ind+1].ff,seg[2*ind+2].ff);// eta func call er pore hobe chill,,value already set nicher gula
    if(seg[2*ind+1].ff==seg[2*ind+2].ff) seg[ind].ff=seg[2*ind+1].ff;
    else if(seg[2*ind+1].ff<seg[2*ind+2].ff) seg[ind].ff=seg[2*ind+1].ff;
    else seg[ind].ff=seg[2*ind+2].ff; 

    if(seg[2*ind+1].ss==seg[2*ind+2].ss) seg[ind].ss=seg[2*ind+1].ss;
    else if(seg[2*ind+1].ss>seg[2*ind+2].ss) seg[ind].ss=seg[2*ind+1].ss;
    else seg[ind].ss=seg[2*ind+2].ss; 
    
}

void query(ll ind,ll low,ll high ,ll l ,ll r ){
// low ,high hocche oi segment er low high ,, l r hocche query range 
//cout << "gg"<< ' '<<seg[ind].ff << ' '<<seg[ind].ss << endl;
// no overlap, baire
if(r<seg[ind].ff ||l>seg[ind].ss)return ;//  val   <l   r<val
// complete overlap
if(l<=seg[ind].ff &&r>=seg[ind].ss) {// l<  val < r
    ansi += (high-low+1);
    return ;

}// karon baki kono ongso thakle oitar ta upore push korbe 

  
              //  l<= val >maxi


//partial overlap
ll mid = (low+high)>>1;
query(2*ind+1,low,mid,l,r);
query(2*ind+2,mid+1,high,l,r);
return;

}

void update(ll ind,ll low,ll high,ll in ,ll val ){
    if(low==high){
        seg[ind]={val,val};
        return;
    }
    ll mid = (high+low)>>1;
    if(in<=mid)update(2*ind+1,low,mid,in,val);
    else update(2*ind+2,mid+1,high,in,val);
    seg[ind].ff= min(seg[2*ind+1].ff,seg[2*ind+2].ff);
    seg[ind].ss= max(seg[2*ind+1].ss,seg[2*ind+2].ss); 
}
void merge(ll par,ll lef ,ll rig){

}
};




void siuu(){
    ll n1,q; cin >> n1>>q;
    vll v1(n1);
    fl(0,n1){
        cin >> v1[i];
        mini = min(v1[i],mini);
        maxi = max(maxi,v1[i]);
    }
    sort(all(v1));
   
    SEGT s1(n1);
     s1.build(0,0,n1-1,v1);
    // auto gg=s1.query(0,0,n1-1,0,n1-1);
    //         cout << gg.ff<<' '<<gg.ss<<endl;
//    ansi =0;
//             s1.query(0,0,n1-1,2,999999);
//             cout << ansi<<endl;
     while(q--){
          char typ; cin >> typ;
          if(typ=='!'){
              ll in , val; cin >> in >> val;
             mini = min(val,mini);
           v1[in]=val;
           sort(all(v1));
         maxi = max(maxi,val);
          s1.build(0,0,n1-1,v1);
              
          }
          else{
              ll l, r; cin >> l >> r;
              if(l>maxi)l = maxi;
              if(l<mini)l= mini;
              if(r>maxi )r= maxi ;
              if(r<mini)r=mini;
              ansi =0;
             s1.query(0,0,n1-1,l,r);
             cout << ansi<<endl;
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

