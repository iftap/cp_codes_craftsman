#include <bits/stdc++.h>
using namespace std;
#define MAXN 400001
 
void solve() {
    long long n,k;
    cin >> n >> k;
    if(n%2 ==0 ) cout <<"YES";
    else{
        long long z=n-k;
        if(z>=0 && z%2==0) cout << "YES";
        else cout << "NO";
    }
    cout << endl;
    
}
 
long long main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
 
    long long t; 
    cin >> t;
    while (t--) {
        solve();
    }
 
    return 0;
}