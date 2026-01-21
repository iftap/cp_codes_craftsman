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
ll val(ll a,ll k){
    if(a<=k) return (a*(a+1)/2);
    ll t = a-k;
    ll ans = k*(k+1)/2;
    ans +=( t*k - (t*(t+1)/2));
    return ans;
}

void ottarmarebap(){
    ll k,x;cin >> k >> x;
    ll ans = x/(k*k),re= x;
    if(ans>=1){
        cout << 2*k-1 << endl;return;
    }
    ll l =1,r= 2*k -1;
    ll temp=0;
    while(r-l>1){
        ll a = val(l,k),b= val(r,k);
        ll mid = l + (r - l) / 2;
        ll mm = val(mid,k);
        if(r-l==1){temp=r;break;}
        if(re==mm){temp= mid;break;}
        else if(mm>re) l = mid;
        else r = mid;
    }
    ans+=temp;
    cout << ans << endl;

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll t=1; 
    cin >> t;
    while (t--) {
        ottarmarebap();
    }

    return 0;
}

