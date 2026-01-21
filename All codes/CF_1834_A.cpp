#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    int k; cin >> k;
    int x, n=0,p=0;
    while(k--){
        cin >> x;
        if(x==1) p++;
        else n++;
    }
    if(n%2==0 && p>=n) cout << 0 << endl;
    //else if(p>=n && n%2!=0) cout << "1" << endl;
    else{
        int c=0;
        while(!(n%2==0 && p>=n)){
            p++;
            n--;
            c++;
        }
        cout << c << endl;
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
