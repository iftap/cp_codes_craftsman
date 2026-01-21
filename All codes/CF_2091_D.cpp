#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    int n,m,k; cin >> n>> m >> k;
    int temp = k/n ;
    if(k%n) temp++;
    if(temp == m){
        cout << temp << endl;
        return;
    }
    int x = m - temp;
    x++;
    temp = m/x ;
    cout << temp << endl;
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
