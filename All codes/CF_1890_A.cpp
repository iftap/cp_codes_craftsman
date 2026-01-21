#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    int n; cin >> n;
    int x,k=n;
    vector<int> v;
    map<int,int> m;
    while(n--){
        cin>> x;
        v.push_back(x);
        m[x]++;
    }
    if (m.size() == 1) {
        cout << "YES" << endl;
        return;
    }

    else if (m.size() > 2) {
        cout << "NO" << endl;
        return;
    }
    else{
        auto it = m.begin();
        int freq1 = it->second;
        int freq2 = (++it)->second;
    
        
        if (abs(freq1 - freq2) <= 1) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
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
