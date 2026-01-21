#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    string s,k; cin >> s >>k ;
    int freq[26]={0};
    for(int i =0;i<k.size();i++){
        freq[k[i]-'A']++;
    }
    string res = "";
    for(int i = s.size()-1;i>=0;i--){
        int y = s[i]-'A';
         if(freq[y]){
            freq[y]--;
            res += s[i];
         }
         
    }
    reverse(res.begin(),res.end());
    if(res== k) cout << "YES" << endl;
    else cout << "NO" << endl;
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
