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
bool pw2(ll n) {
    if (n <= 0) return false;
    while (n > 1) {
        if (n % 2 != 0) return false;
        n /= 2;
    }
    return true;
}
ll fbb(ll n) {
    ll pos = -1;
    while (n > 0) {
        n >>= 1;
        pos++;
    }
    return pos; 
}

void solve(){
    ll n ; cin >> n;
    ll temp =1;
    ll k =n;
    temp = fbb(n);
    temp++;
   // if(pw2(k) || k==1) temp--;
    ll ans = temp*2;
    //if(pw2(k) || k==1) ans--;
    
    cout << ans+1 << endl;

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