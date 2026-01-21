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
    ll n, k; cin >> n >> k;
    vector<vector<ll>> v(n, vector<ll>(n));
    fl(0,n){
        for(ll j=0;j<n;j++){
            cin >> v[i][j];
        }
    }
    if(n==1){
        cy; return;
    }
    ll ans =0;
    fl(0,n){
        for(ll j=0;j<n;j++){
            if(v[i][j] != v[n-i-1][n-j-1]){
                ans++;
                //v[i][j] = v[n-i-1][n-j-1];
            }
        }
    }
    ans/=2;
    if(k<ans) cn;
    else{
        if((k-ans)%2)cn;
        else cy;
    }


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