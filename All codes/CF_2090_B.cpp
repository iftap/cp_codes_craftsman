#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    int m,n; cin >>n >> m;
  //  vector<vector<int>> v(n, vector<int>(m));

    vector<vector<int>> v(n, vector<int>(m));
    
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        for (int j = 0; j < m; j++) {
            v[i][j] = s[j] - '0';
        }
    }
    bool found = true;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++) {
            if(v[i][j]==0) continue;
            else{
                //row chk
                bool r = true;
                for(int k=0;k<i;k++){
                    if(v[k][j]==0) {
                        r = false;
                        break;
                    }
                }
                if(r) continue;
                bool c = true;
                for(int k=0;k<j;k++){
                    if(v[i][k]==0) {
                        c = false;
                        break;
                    }
                }
                if(c==false){
                    found = false;
                    goto oinaa;
                }

            }
        }
    }
    oinaa:
    if(found) cout << "YES";
    else cout << "NO";
    cout << endl;
    
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