#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n,x; cin >> n >> x;
    ll ans =0,a,summ=0;
    while(n--){
        cin >> a;
        summ+=a;
        ans+= a/x;
        if(a%x) ans++;
    }
    ll b=0;
    if(summ%x) b=1;
    summ/=x;
    summ+=b;
    cout << summ << " " << ans << endl;

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--){
    solve();
    }
    return 0;
}
