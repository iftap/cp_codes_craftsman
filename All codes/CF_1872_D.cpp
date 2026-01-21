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

ll sm(ll r,ll l){
    return (r - l + 1) * (l + r) / 2;
}


void ottarmarebap(){
    ll  n,x,y; cin >> n >> x >> y;
    ll ans =0;
    ll pl= n/x,mn= n/y;
    ll lcm = x* y / __gcd(x,y);
    ll t = n/lcm;
    pl-=t;mn-=t;
    ll pll = sm(n,n-pl+1),mnn= sm(mn,1);
    
    cout << pll-mnn << endl;

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t = 1;
    cin >> t;
    while (t--) {
        ottarmarebap();
    }

    return 0;
}
