#include <bits/stdc++.h>
using namespace std;
#define ll long long


#define pb push_back
#define all(v) v.begin(), v.end()
#define cy cout << "YES\n"
#define cn cout << "NO\n"
#define fl(s,e) for(int i=s;i<e;i++)




void solve() {
    string s; cin >> s;
    vector<ll> v(10,0);
    vector<char> an(10,'a');
    for(auto u: s){
        v[u-'0']++;
    }
    ll posi =9;
    for(int i=9;i>=0;i--){
        if(v[i]>0 ) {
            cout << i;
            v[i]--;
        }
        else{
            for(int j=i;j<10;j++){
            if(v[j]>0){
                cout<<j;
                v[j]--;
                break;
            }
        }
        }
    }
    
       
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