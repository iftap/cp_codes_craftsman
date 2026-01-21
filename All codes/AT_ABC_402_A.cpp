#include <bits/stdc++.h>
using namespace std;
#define ll long long


void solve() {
    string s; cin >> s;
    string ans;
    for(int i=0;i<s.size();i++){
        if(isupper(s[i])) ans+=s[i];
    }
    cout << ans << endl;
    

        
    }


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
 //   ll t; 
   // cin >> t;
   // while (t--) {
        solve();
   // }

    return 0;
}