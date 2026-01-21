#include <bits/stdc++.h>
using namespace std;
#define ll long long


#define pb push_back
#define all(v) v.begin(), v.end()
#define cy cout << "YES\n"
#define cn cout << "NO\n"
#define fl(s,e) for(int i=s;i<e;i++)




void solve() {
    ll n,x ; cin  >> n >> x; 
    for(ll i=0;i<n;i++){
        if(i==x) continue;
        cout << i << " ";
    }
    if(x>=n){
        cout << endl;
        return;
    }
    cout << x ;
    //for(ll i= 0;i<x;i++){
     //   cout << i << " ";
   // }
    cout << endl;

    
        
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