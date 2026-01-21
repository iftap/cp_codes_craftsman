#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    int n,x; cin >> n;
    int b[n];
    for(int i=0;i<n;i++){
        cin >> b[i];
    }
    if(n==1){
        cout << "1" << endl;
        cout << b[0] << endl;
    }
    else{
    vector<int> a;
    a.push_back(b[0]);
    for(int i=1;i<n;i++){
        if(b[i]<b[i-1]){
            if(b[i]==1) a.push_back(b[i]);
            
            else a.push_back(b[i]-1);
        } 
        a.push_back(b[i]);
    }
    cout << a.size() << endl;
    for(auto u:a) cout << u << " ";
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
