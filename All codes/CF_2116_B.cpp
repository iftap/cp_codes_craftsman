#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define cy cout << "YES\n"
#define cn cout << "NO\n"
#define fl(s,e) for(int i=s;i<e;i++)
void chk(ll n){
    
}
ll mod = 998244353;
ll mp(ll n) {
    if(n<63){
        ll a= (1LL<<(n))%mod;
        return a;
    }
    ll result = 1;
    ll base = 2;

    while (n > 0) {
        if (n % 2 == 1) result = (result * base) % mod;
        base = (base * base) % mod;
        n /= 2;
    }
    return result;
}

void solve(){
    ll n ; cin >> n;
    ll temp =0;
    while(n){
        temp++;
        n/=2;
    }
    ll ans = temp+3;
    cout << ans << endl;

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll t=1; 
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}