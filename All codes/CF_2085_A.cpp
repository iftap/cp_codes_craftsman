#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    int n,k; cin >> n >> k;
    string s; cin >> s;
    map<int,int> m;
    //int c[26]={0};
    for(auto u:s) m[u-'a']++;
    string rs =s;
    reverse(s.begin(),s.end());
    if(m.size()==1 ) cout << "NO" << endl;
    else if (s > rs)  cout << "YES" << endl;
    else{
        if(k>0) cout << "YES";
        else cout << "NO" ;
        cout << endl;
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