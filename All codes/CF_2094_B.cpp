#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll m,n,l ,lef=0,r =0; cin >> n >>m >> l >> r;
    ll gc = __gcd(-l,r);
    lef = -l/gc;
    ll ri = r/gc;
    ll ansl=0,ansr=0;
    ll temp = m/(lef+ri);
    ansl= temp*lef;
    ansr = temp*ri;
    temp = m%(lef+ri);
    ansl += min(temp,lef);
    temp-= min(temp,lef);
    if(temp) ansr+=temp;
    cout << -ansl <<" " << ansr << endl;
        
    }


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll t; 
    cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}