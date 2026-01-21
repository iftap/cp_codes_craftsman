#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
        ll l,h; cin >> l >> h;
        ll ans= 0,temp,x,k;
        cin >> k;
        for(ll i =0;i< k;i++){
            cin >> x;
            if(i==0) {
                temp = x; continue; }
            if(i== k-1) ans= max((x-temp)*h,ans);
        }
        cin >> k;
        for(ll i =0;i< k;i++){
            cin >> x;
            if(i==0) {
                temp = x; continue; }
            if(i== k-1) ans= max((x-temp)*h,ans);
        }
        cin >> k;
        for(ll i =0;i< k;i++){
            cin >> x;
            if(i==0) {
                temp = x; continue; }
            if(i== k-1) ans= max((x-temp)*l,ans);
        }
        cin >> k;
        for(ll i =0;i< k;i++){
            cin >> x;
            if(i==0) {
                temp = x; continue; }
            if(i== k-1) ans= max((x-temp)*l,ans);
        }

        cout << ans << endl;

    }


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll t; 
    cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}