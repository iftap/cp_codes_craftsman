#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
        string s1,s2; cin >> s1 >> s2;
        char temp = s1[0];
        vector<ll> f,r;

        ll cn=0;
        for(ll i=0;i<s1.size();i++){
            if(s1[i]==temp) cn++;
            else{
                temp=s1[i];
                f.push_back(cn);
                cn=1;
            }
        
        }
        f.push_back(cn);
        cn=0;
        temp=s2[0];
        for(ll i=0;i<s2.size();i++){
            if(s2[i]==temp) cn++;
            else{
                temp=s2[i];
                r.push_back(cn);
                cn=1;
            }
        }
        r.push_back(cn);
        bool ans =1;
        if(s1[0] != s2[0] || r.size()!= f.size()){
            cout << "NO\n"; return;
        }
        for(ll i=0;i<f.size();i++){
            if(f[i]>r[i] || r[i]> 2*f[i]){
                ans = 0;
                break;
            }
        }
        
        if(ans) cout << "YES\n";
        else cout << "NO\n";
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