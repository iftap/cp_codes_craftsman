#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define cy cout << "YES\n"
#define cn cout << "NO\n"
#define fl(s,e) for(int i=s;i<e;i++)
#define vll vector<ll>
#include<numeric>
ll cnn(ll l,ll r ,ll a){
    return r/a - ((l-1)/a);
}

void ottarmarebap(){
    ll l,r; cin >> l >> r;
    ll ans =0;
    ans += cnn(l,r,2);
    ans += cnn(l,r,3);
    ans += cnn(l,r,5);
    ans += cnn(l,r,7);

    ans -= cnn(l,r,6);
    ans -= cnn(l,r,15);
    ans -= cnn(l,r,21);
    ans -= cnn(l,r,14);
    ans -= cnn(l,r,10);
    ans -= cnn(l,r,35);

    ans += cnn(l,r,30);
    ans += cnn(l,r,42);
    ans += cnn(l,r,105);
    ans += cnn(l,r,70);

    ans -= cnn(l,r,210);
    
cout << r-l-ans+1 << endl;
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll t=1; 
    cin >> t;
    while (t--) {
        ottarmarebap();
    }

    return 0;
}









