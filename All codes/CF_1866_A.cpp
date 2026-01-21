#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    int n,x; cin >> n;
    int temp = INT_MAX;
    while(n--){
        cin >> x;
        x = abs(x);
        temp = min(x,temp);
    }
    cout << temp << endl;
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll t; 
   // cin >> t;
    //while (t--) {
        solve();
    //}

    return 0;
}
