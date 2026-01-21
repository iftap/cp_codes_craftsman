#include <bits/stdc++.h>
using namespace std;
#define ll long long


#define pb push_back
#define all(v) v.begin(), v.end()
#define cy cout << "YES\n"
#define cn cout << "NO\n"
#define fl(s,e) for(int i=s;i<e;i++)




void solve() {
    //ll n; cin >> n;
    string s ; cin >> s;
    ll n= s.size();
    if(s[0]==s[n-1]){
        cn;
        return;
    }
    ll a[3]={0,0,0};
    for(auto u:s){
        if(u=='A') a[0]++;
        else if(u=='B') a[1]++;
        else a[2]++; 
    }
    if(a[0]+a[1]==a[2] || a[1]+a[2]==a[0] || a[0]+a[2]==a[1]){
        cy;
        return;
    }
    cn;

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