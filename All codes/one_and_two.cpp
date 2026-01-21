#include <bits/stdc++.h>
using namespace std;
#define MAXN 400001
#define ll long long

void solve() {
    ll n,sum=1,c=0,f=1; cin >> n;
    ll a[n];
    bool flag = false;
    for(ll i=0;i<n ; i++){
        cin >> a[i];
        sum*=a[i];
    }
    for(auto u: a){
        f*=u;
        sum/=u;
        c++;
        if(f==sum){
            flag = true;
            break;
        }
    }
    if(flag) cout << c << endl;
    else cout << "-1" << endl;
    
    
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
 
    ll t; 
    cin >> t;
    while (t--) {
        solve();
    }
 
    return 0;
}