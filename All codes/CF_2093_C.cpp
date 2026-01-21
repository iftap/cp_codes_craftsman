#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool prmck(ll n){
     if(n<2) return false;
    if( n==2 || n==3) return true;
    if(n%2==0 || n%3==0) return false;
    for(ll i=5;i*i<=n;i+=6){
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}
void solve() {
    ll x;
    x= 1<< 33;
    cout << x << endl;

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    //cin >> t;
   //while (t--) {
        solve();
  //  }

    return 0;
}
