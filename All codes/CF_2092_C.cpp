#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    int n ; cin >> n;
    vector<ll> v(n);
    vector<ll> ve;
    vector<ll> vo;
    ll sum=0;
    for(ll i=0;i<n;i++){
        cin >> v[i];
        sum+=v[i];
        if(v[i]%2)vo.push_back(v[i]);
        else ve.push_back(v[i]);
    }
    ll es= ve.size();
    ll os = vo.size();
    if(es==0 ||os==0)  {
        sort(v.begin(),v.end());
        cout << v[n-1] << endl; return;
    }
    if(es=os){
        if(n==2) {
            cout << sum << endl; return;
        }
        
    }
    
      ll temp = os-1;
      sum-=temp;
        cout << sum << endl;
        return;
    
    

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
