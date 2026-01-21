#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    string s, k;
    int a, b;
    cin >> a >> b;
    cin >> s >> k;
    
    bool found = false;
    for(int i=0;i<=5;i++){
        if(s.find(k) != string::npos){
            found = true;
            cout << i << endl;
            break;
        }
        s+=s;
    }
    if(!found) cout << "-1" << endl;
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
