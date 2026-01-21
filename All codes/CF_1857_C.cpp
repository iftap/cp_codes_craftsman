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

ll sm(ll r,ll l){
    return (r - l + 1) * (l + r) / 2;
}


void ottarmarebap(){
    ll n ; cin >> n;
    ll tt = n*(n-1)/2;
    vll v(tt);
    fl(0,tt) cin >> v[i];
    if(n==2){
        cout << v[0]<<' '<<v[0]+1<<endl;
        return;
    }
    //7 5 3 5 3 3
    //7 5 5 3 3 3
    sort(rall(v));
    ll z =2;
    ll j =1;
    cout<< v[0]+1<<' ';
    while(z<=n){
        cout << v[j-1] << ' ';
        j+=z;
        z++;
    }
    for(ll i =1;i<=tt+n;i+=z){
        
        
        z++;
    }
    
    cout << endl;

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t = 1;
    cin >> t;
    while (t--) {
        ottarmarebap();
    }

    return 0;
}
