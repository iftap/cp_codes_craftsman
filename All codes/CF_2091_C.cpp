#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    int n; cin >> n;
    if(n%2==0) {
        
        cout << "-1" ;
        cout << endl;
    }
    else{
        if(n==1){cout << "1" << endl;
            return;
        }
        for(int i=n;i>0;i--) cout << i << " ";
        cout << endl;
}
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
