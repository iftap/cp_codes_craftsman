#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n; cin >> n;
    string s1,s2; cin >> s1 >> s2;
    ll es1=0,es2=0,os1=0,os2=0;
    // even loop 

    for(ll i=1;i<n;i+=2){
        if(s1[i]=='1') es1++;
        if(s2[i]=='1') es2++;
    }
    //odd 
    for(ll i=0;i<n;i+=2){
        if(s1[i]=='1') os1++;
        if(s2[i]=='1') os2++;
    }
    ll eve= n/2;
    ll od = n/2;
    //eve++;
    //od++;
    if(n%2!=0) eve++;
    bool ans = true;
    if(os1+es2> od) ans = false;
    if(es1+os2>eve) ans = false;
    if(ans) cout << "YES" << endl;
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
