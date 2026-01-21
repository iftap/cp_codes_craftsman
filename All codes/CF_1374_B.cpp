#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n,c2=0,c3=0; cin >> n;

    while(n%2==0 || n%3==0){
        if(n%2) {c3++;
            n/=3; }
        else {
            n/=2;
            c2++;
    }
}
    if(n!=1 || c2>c3) cout << "-1" << endl;
    else cout << (c3+(c3-c2))<< endl;
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
