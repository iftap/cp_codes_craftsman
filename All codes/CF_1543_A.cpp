#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll a,b,ans=0,cnt=0; cin >> a >> b;
    ll maxi = max(a,b);
    ll mini = min(a,b);
    ll temp =  maxi-mini;
    if(a==b){
        cout << "0 0\n";
        return;
    }
    ll tempu = min(maxi%temp, temp-(maxi%temp));
    cout << temp <<" "<< tempu << endl;
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
