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
#define sz size()

void ottarmarebap(){
    ll n,k,x; cin >> n >> k;
    vll c(n),v(k);
    ll ans =0;
    fl(0,n) cin >>c[i];
    fl(0,k) cin >> v[i];
    
    sort(rall(c));
    ll min =0;
    fl(0,n){
        if(v[c[i]-1]>v[min]){
            ans+= v[min];
            min++;
        }
        else ans+= v[c[i]-1];
    }
    cout << ans << endl;
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

