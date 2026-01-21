#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n,k,b,s,maxi=0; cin >> n >> k >> b >> s;
    vector<ll> v(n);
    
    maxi = b*k + n*(k-1);
    if(s> maxi  || s< b*k){
        cout << "-1\n";
        return;
    }
    ll tp=k;
    vector<ll> w;
    if(s >=b*k && s<= (b*k+(k-1))){ 
        for(ll i=1;i<n;i++) cout << "0 ";
        cout << s << endl;
        return;
    }
    ll extra = s- b*k-k+1;
    v[0]=s;
    ll xnx=0;
    for(ll i =1 ;i<n;i++){
        xnx = min(extra,k-1);
        extra-= xnx;
        v[i]= xnx;
        v[0]-= xnx;
    }
    for(ll i =n-1;i>=0;i--) cout << v[i] << " ";

    cout << endl;
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
