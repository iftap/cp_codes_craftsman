#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin >> t;
    while(t--){
    ll n,k,x;

    cin >> n >> k;
    vector<pair<ll,ll>> p;
    for(int i=1;i<=n;i++){
        cin >> x;
        x%=k;
        if(x==0) x=k;

        p.push_back({x,i});
        
    }
    sort(p.begin(), p.end(), [](pair<ll, ll> &a, pair<ll, ll> &b) {
        if (a.first == b.first) return a.second < b.second;  // Sort index in descending order if first values are same
        return a.first > b.first;  // Sort first value in descending order
    });
    
    for(auto &u:p){
        cout << u.second << " ";
    }
    cout << endl;
    
}
    return 0;
}