#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define cy cout << "YES\n"
#define cn cout << "NO\n"
#define fl(s,e) for(int i=s;i<e;i++)
#define vll vector<ll>
#include<numeric>
#define sz size()

 ll n,m  ,a,b,c; 
 vector<vector<ll>> v;
// vll tm;
bool good(ll x){
    ll temp=0;
    
    fl(0,n){
        ll t= v[i][0],z=v[i][1],y=v[i][2];
        ll u_temp=0;
        
            ll cyc = (t*z)+y;
            u_temp= (x/cyc )*z;
            ll rem = x%cyc;
            if(rem) u_temp =min(z,rem/t);
        
        temp+= u_temp;
        //tm[i]= u_temp;
    }
    return temp>= m;
}
// 000000011111111
void ottarmarebap(){
    cin >> m>> n;
    //tm.resize(n,0);
    v.resize(n, vector<ll>(3));
    fl(0,n) cin >> v[i][0] >> v[i][1]>>  v[i][2];
    
    ll l =0,r=2*1e9;
    while(l+1<r){
        ll m= (l+r)/2;
        if(good(m))r=m;
        else l=m;
    }
    vll ans(n);
    
        ll temp=0;
    
    fl(0,n){
        ll t= v[i][0],z=v[i][1],y=v[i][2];
        ll u_temp=0;
        
            ll cyc = (t*z)+y;
            u_temp= (r/cyc )*z;
            ll rem =r%cyc;
            u_temp +=min(z,rem/t);
        
        ///temp+= u_temp;
        ans[i]= u_temp;
    }
    ll total = accumulate(all(ans), 0LL);
    for(int i=0; i<n && total>m; i++){
        ll remove = min(total - m, ans[i]);
        ans[i] -= remove;
        total -= remove;
    }
    
    cout << r << endl;
    fl(0,n) cout << ans[i] << ' ';
    cout << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll t=1; 
    //cin >> t;
    while (t--) {
        ottarmarebap();
    }

    return 0;
}


