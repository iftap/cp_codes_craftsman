#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n,maxindex=0; cin >> n;
    vector<ll> v(n);
    ll maxi =0;
    for(int i=0;i<n;i++) cin >> v[i];
    for(int i=1;i<n-1;i++){
        if(v[i]>v[i-1] && v[i]>v[i+1]) {
            
            cout << "YES\n"<< i << " " << i+1 <<" " << i+2<< endl;  
            return;
        }
    }

   cout << "NO" << endl;
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
