#include <bits/stdc++.h> 
#include <bitset>

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
class SEGT{
vll seg;
public:
SEGT(ll n ){
    seg.resize(4*n+1,0);
}
void build(ll ind,ll low,ll high,vll &arr){
    if(low==high){
        seg[ind]=arr[low];
        return;
    }
    
    ll mid= (low+high)/2;
    build(2*ind+1,low ,mid,arr);// lower left
    build(2*ind+2,mid+1,high,arr);
    seg[ind]= min(seg[2*ind+1],seg[2*ind+2]);// eta func call er pore hobe chill,,value already set nicher gula
    
}

ll query(ll ind,ll low,ll high ,ll l ,ll r ){
// low ,high hocche oi segment er low high ,, l r hocche query range 

// no overlap, baire
if(r<low ||high<l)return LLONG_MAX;
// complete overlap
if(low>=l && high<=r) return seg[ind];// karon baki kono ongso thakle oitar ta upore push korbe 

//partial overlap
ll mid = (low+high)>>1;
ll left = query(2*ind+1,low,mid,l,r);
ll right =query(2*ind+2,mid+1,high,l,r);
return min(left,right);

}

void update(ll ind,ll low,ll high,ll in ,ll val ){
    if(low==high){
        seg[ind]=val;
        return;
    }
    ll mid = (high+low)>>1;
    if(in<=mid)update(2*ind+1,low,mid,in,val);
    else update(2*ind+2,mid+1,high,in,val);
    seg[ind]= min(seg[2*ind+1],seg[2*ind+2]);
}
};




void siuu(){
    ll n1,q; cin >> n1>>q;
    vll v1(n1);
    fl(0,n1)cin >> v1[i];
   
    SEGT s1(n1);
    
    s1.build(0,0,n1-1,v1);
    while(q--){
        ll typ; cin >> typ;
        if(typ==1){
            ll in , val; cin >> in >> val;

            s1.update(0,0,n1-1,in,val);
            v1[in]=val;
        }
        else{
            ll l, r; cin >> l >> r;
            cout <<s1.query(0,0,n1-1,l,r-1)<<endl;;
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

