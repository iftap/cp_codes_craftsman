#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n,d; cin >> n >> d;
    vector<ll> v(n);
    for(ll i=0;i<n;i++){
        cin >> v[i];
    }
    sort(v.rbegin(),v.rend());
    ll k =n,ans=0,temp;
    for(ll i =0;i<n;i++){
        if(v[i]>d){
            ans++;
            k--;
        }
        else{
            temp = d/v[i];
            temp++;
            if(temp>k) break;
            ans++;
            k-=temp;
        }
    }
    cout << ans << endl;
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
   // ll t; 
   // cin >> t;
   // while (t--) {
        solve();
    //}

    return 0;
}
