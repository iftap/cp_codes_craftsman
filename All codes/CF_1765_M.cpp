#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n; cin  >> n;
    if(n%2==0){
        cout << n/2 <<" " << n/2 << endl;
        return; 
    }
    ll h=n-1,l=1,temp=INT_MAX,mino=0;
    for(ll i=2 ; i*i<=n ; i++){
        if(n%i==0){
        l=n/i;
        break;
        }
    }
    h= n-l;
    cout << l << " " <<n-l<< endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll t; 
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
