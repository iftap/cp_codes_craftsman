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
//vll ori;
public:
SEGT(ll n ){
    seg.resize(4*n+1,0);
    //ori.resize(4*n+1,0);
}
void build(ll ind,ll low,ll high,vll &arr,ll level){
    if(low==high){
        seg[ind]=arr[low];
        //ori[ind]=1;
        return;
    }
    
    ll mid= (low+high)/2;
    build(2*ind+1,low ,mid,arr,level-1);// lower left
    build(2*ind+2,mid+1,high,arr,level-1);
    //seg[ind]= min(seg[2*ind+1],seg[2*ind+2]);// eta func call er pore hobe chill,,value already set nicher gula
    //ll ms = 63 - __builtin_clzll(ind+1);
    if(level%2==0)seg[ind]=seg[2*ind+1]^seg[2*ind+2];
    else{
        seg[ind]=seg[2*ind+1]|seg[2*ind+2];
       // ori[ind]=1;
    }
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

void update(ll ind,ll low,ll high,ll in ,ll val,ll level ){
    if(low==high){
        seg[ind]=val;
        return;
    }
    ll mid = (high+low)>>1;
    if(in<=mid)update(2*ind+1,low,mid,in,val,level-1);
    else update(2*ind+2,mid+1,high,in,val,level-1);
    if(level%2==0)seg[ind]=seg[2*ind+1]^seg[2*ind+2];
    else{
        seg[ind]=seg[2*ind+1]|seg[2*ind+2];
       // ori[ind]=1;
    }
}
ll root() {
    return seg[0];
}

};




void siuu(){
    ll g;
    ll  q; cin >> g >> q;
    ll n = 1<<g;
    //cout << n << endl;
    vll v(n);
    fl(0,n) cin >> v[i];
    SEGT st(n+1);
    st.build(0,0,n-1,v,g);
    while(q--){
        ll a , b; cin >> a >> b;
        st.update(0,0,n-1,a-1,b,g);
        cout << st.root()<<endl;
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

