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
vector<tuple<ll,ll,ll>> seg;
public:
SEGT(ll n ){
    seg.resize(4*n + 1);
}
void build(ll ind,ll low,ll high,vll &arr){
    if(low==high){
        //seg[ind]=0;
        if(arr[low]==1){
            get<0>(seg[ind]) = 0;
            get<1>(seg[ind]) = 1;
            get<2>(seg[ind]) = 0;
}//  lf  1 mane )     0 mane (
        else {
            get<0>(seg[ind]) = 0;
            get<1>(seg[ind]) = 0;
            get<2>(seg[ind]) = 1;
        }
        return;
    }
    
    ll mid= (low+high)/2;
    build(2*ind+1,low ,mid,arr);// lower left
    build(2*ind+2,mid+1,high,arr);
    mrg(ind,2*ind+1,2*ind+2);
    // get<0>(seg[ind])= get<0>(seg[2*ind+1])+get<0>(seg[2*ind+2]);// eta func call er pore hobe chill,,value already set nicher gula
    // ll gg=0;
    // if(get<2>(seg[2*ind+2])>0){
    //     if(get<1>(seg[2*ind+1])){
    //         gg= min(get<2>(seg[2*ind+2]),get<1>(seg[2*ind+1]));
    //         //rg[2*ind+2]-=gg;
    //         //lf[2*ind+1]-=gg;
    //         get<0>(seg[ind])+= (2*gg);
    //     }
    // }
    // get<1>(seg[ind])= get<1>(seg[2*ind+1])+get<1>(seg[2*ind+2])-gg;
    // get<1>(seg[ind])= get<1>(seg[2*ind+1])+get<1>(seg[2*ind+2])-gg;
}

tuple<ll,ll,ll> query(ll ind,ll low,ll high ,ll l ,ll r){
// low ,high hocche oi segment er low high ,, l r hocche query range 

// no overlap, baire
if(r<low ||high<l)return {0,0,0};
// complete overlap
if(low>=l && high<=r) return seg[ind];// karon baki kono ongso thakle oitar ta upore push korbe 

//partial overlap
ll mid = (low+high)>>1;
auto  left = query(2*ind+1,low,mid,l,r);
auto right =query(2*ind+2,mid+1,high,l,r);
ll gg =min(get<1>(left),get<2>(right));
ll total = get<0>(left) + get<0>(right)+2*gg;
ll lef= get<1>(left) + get<1>(right) -gg;
ll rig = get<2>(left) + get<2>(right) -gg;
return{total,lef,rig};

}

void mrg(ll par,ll lef,ll rig){
    ll gg = min(get<2>(seg[rig]),get<1>(seg[lef]));
    get<0>(seg[par])= get<0>(seg[lef])+get<0>(seg[rig])+2*gg;
    get<1>(seg[par])= get<1>(seg[lef])+get<1>(seg[rig])-gg;
    get<2>(seg[par])= get<2>(seg[lef])+get<2>(seg[rig])-gg;
}

};




void siuu(){
    string s; cin >> s;
    ll  q; cin >> q;
    ll n =s.sz;
    //cout << n << endl;
    vll v(n);
    fl(0,n){
        if(s[i]=='(')v[i]=1;
        else v[i]=0;
    }
    SEGT st(n+1);
    st.build(0,0,n-1,v);
    while(q--){
        ll a , b; cin >> a >> b;
        auto gg= st.query(0LL,0LL,n-1,a-1,b-1);
        cout << get<0>(gg)<<endl;
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

