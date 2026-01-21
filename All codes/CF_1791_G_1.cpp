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


void ottarmarebap(){
    ll n , k ; cin >> n >> k;
    vll v(n),a(n);
    fl(0,n)  cin >> v[i];
    fl(0,n) a[i]= v[i]+i+1;
    sort(all(a));
    ll ans =0;
    fl(0,n){
        if(k<a[i]) break;
        k-=a[i];
        ans++;
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