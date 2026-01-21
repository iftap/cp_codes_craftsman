#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    int n ; cin >> n;
    int x, e=0,o=0;
    vector<int> v;
    while(n--){
        cin >> x;
        if(x%2==0) v.push_back(0);
        else v.push_back(1);
    }
    int cnt =0;
    for(int i=1;i<v.size();i++){
        if(v[i]==v[i-1]) cnt++;
    }
    cout << cnt << endl;
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
