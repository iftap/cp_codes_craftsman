#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n ; cin >> n;
    ll arr[n];
    for(ll i=0;i<n;i++) cin >> arr[i];
    ll d=1,temp;
    set<ll> st;
    while(1){
        for(ll i=0;i<n;i++){
           
           st.insert(arr[i]%d);
        }
           if(st.size()==2){
            cout << d<< endl;
            return;
           }
           st.clear();
        
           d*=2;
        }
        
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