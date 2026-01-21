#include <bits/stdc++.h>
using namespace std;
#define MAXN 400001
#define ll long long

void solve() {
    string s,k; cin >> s >> k;
    bool flag = true;
    int one[26]={0};
    int two[26]={0};
    for(int i=0,j=0;i<s.size()-1,j<k.size()-1;i++,j++){
        one[s[i]-'a']++;
        two[k[j]-'a']++;
    }
    

    
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}