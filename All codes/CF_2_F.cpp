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

class lazy_seg{
    public:
    vll tr,lazy;
    lazy_seg(ll n ){
        tr.assign(4*n,0);
        lazy.assign(4*n,-1);
    }

    void build(ll node,ll start, ll end,vll &arr){
        if(start==end){
            tr[node]=arr[start];
            return;
        }
        ll mid= (start+end)>>1;
        build(2*node+1,start,mid,arr);
        build(2*node+2,mid+1,end,arr);
        tr[node]= tr[2*node+1]+tr[2*node+2];
    }

    void update(ll ind,ll low, ll high,ll l , ll r , ll val){
        //updATE prev rem updtaes and propagate downwards
        if(lazy[ind]!=-1){
            tr[ind]=(high-low+1)*lazy[ind];
            if(low!=high){
                lazy[2*ind+1]=lazy[ind];
                lazy[2*ind+2]=lazy[ind];
            }

            lazy[ind]=-1;
        }

        //no overlap
        if(high<l || low>r)return;

        //complete overlap   l low high r
        if(low>=l && high<=r){
            tr[ind]= val*(high-low+1);
            if(low!=high){
                lazy[2*ind+1]=val;
                lazy[2*ind+2]=val;
            }
            return;
        }

        //partial
        ll mid=(low+high)>>1;
        update(2*ind+1,low,mid,l,r,val);
        update(2*ind+2,mid+1,high,l,r,val);
        tr[ind]=tr[2*ind+1]+tr[2*ind+2];
    }

    ll query(ll ind,ll low,ll high,ll l, ll r){
        //udte if any updaet remaining'
        if(lazy[ind]!=-1){
            tr[ind]=(high-low+1)*lazy[ind];
            if(low!=high){
                lazy[2*ind+1]=lazy[ind];
                lazy[2*ind+2]=lazy[ind];
            }

            lazy[ind]=-1;
        }

        //no overlap
        if(high<l || low>r)return 0;
        //complete overlap   l low high r
        if(low>=l && high<=r) return tr[ind];


        //partial
        ll mid=(low+high)>>1;
        return query(2*ind+1,low,mid,l,r)+query(2*ind+2,mid+1,high,l,r);
        
    }


};


/// 1 l r v value v to l to r-1
/// 2 l r  sum on the segment 
void siuu(){
    ll n , m ; cin >> n >> m ;
    vll v(n,0);
    //fl(0,n)cin >> v[i];
    lazy_seg ls(n);
    ls.build(0,0,n-1,v);
    while(m--){
        ll x; cin >> x ;
        if(x==1){
            ll l , r, k; cin >> l >> r >> k;
            ls.update(0,0,n-1,l,r-1,k);
        }
        else{
            ll l , r; cin >> l >> r;
            cout <<ls.query(0,0,n-1,l,r-1)<<endl;
        }
    }
} 
 
int main() { 
    ios::sync_with_stdio(false); 
    cin.tie(nullptr); 
    //seive();
    ll t=1;  
    //  cin >> t; 
    while (t--) { 
        siuu(); 
    } 
 
    return 0; 
}