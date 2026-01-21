#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    string s; cin >> s;
    int  c0=0,c1=0;
    for(char u:s){
        if(u=='0') c0++;
        else c1++;
    }
    int ans = min(c0,c1);
    if(ans%2==1) cout << "DA" << endl;
    else cout << "NET" << endl;

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
