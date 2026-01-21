#include <bits/stdc++.h>
using namespace std;
#define ll long long
int xori(int n) {
    if(n%4==0) return n;
    if(n%4==1) return 1;
    if(n%4==2) return n+1;
    if(n%4==3) return 0;
    return 0;
}
void solve() {
    ll mex ,xo; cin  >> mex>> xo;
    ll temp = xori(mex-1);
    if(temp==xo){
        cout << mex << endl;
        return;
    }
    if((temp^xo) == mex){
        cout << mex+2 << endl;
    }
    else cout << mex+1 << endl;

    return;

        
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