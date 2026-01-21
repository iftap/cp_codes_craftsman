#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n ,x,z,cnt=0; cin >> n >> x;
    vector<ll> v(n);
    ///v[0]= INT_MAX;
    for(int i=0;i<n;i++){
        cin >> v[i];
        if(v[i]>=x) cnt++;
    }
    sort(v.begin(), v.end(), greater<ll>());
    ll temp = cnt;
    ll mini=INT_MAX ,cnti=0;
    for(int i= temp;i<n;i++){
        mini= min(v[i],mini);
        cnti++;
        if(mini*cnti >= x){
            cnt++;
            cnti=0;
            //i++;
            //if(i>n) break;
            mini = INT_MAX;
        }

    }







    
    cout << cnt << endl;

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
