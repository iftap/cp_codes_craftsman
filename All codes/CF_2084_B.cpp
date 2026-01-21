#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n; cin >> n;
    vector<ll> v(n);
    for(ll i=0;i<n;i++){
        cin >> v[i];
    }
    sort(v.begin(),v.end());
    bool x = 0;
    ll cnt =0,temp=0;
    if(v[0]==v[1]){
        x=1;
        cout << "YES\n";
        return; }
    else{
        for(ll i =1;i<n;i++){
            if(v[i]%v[0]==0){
                temp = __gcd(temp,v[i]);
                if(temp==v[0]){
                    cout << "YES\n";
                    return;
                    x=1;break;
                }
            }
        }
    }
   /* else{
        ll gc =v[1];
        //v.push_back(0);
        for(ll i=2;i<n;i++){
            gc= __gcd(v[i],gc);
            if(gc== 1){
                gc =1; break;
            }
        }
        
    }
        */
    if(x) cout << "YES";
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
