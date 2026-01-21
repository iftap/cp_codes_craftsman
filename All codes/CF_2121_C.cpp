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
#define s.sz  s.size()

void ottarmarebap(){
    ll n,m,maxi=0; cin >> n >>m;
    vector<vector<ll>> v(n, vector<ll>(m, 0));
    vector<ll> r(n),c(m),z;
    ll rj=0,rk=0;
    fl(0,n){
        for(ll j=0;j<m;j++){
            cin >> v[i][j];
            //z.pb(v[i][j]);
            maxi = max(maxi,v[i][j]);
        }
    }
    ll maxicn=0;
    fl(0,n){
        for(ll j=0;j<m;j++){
            if(v[i][j]==maxi) maxicn++;
        }
    }
    bool cg =0;
    fl(0,n){
        ll temp =0;
        for(ll j=0;j<m;j++){
            if(v[i][j]==maxi) temp++;
        
        if(temp>1) {
                rk++;
                break;
            }
        }
        if(rk>1) break;
    }
    fl(0,m){
        ll temp =0;
        for(ll j=0;j<n;j++){
            if(v[j][i]==maxi) temp++;
            if(temp>1) {
                rj++;
                break;
            }
        }
        if(rj>1) break;
        
        
        
    }
    if(n==1|| m==1) cout << maxi-1 << endl;
    else if(rj>1 || rk>1) cout << maxi << endl;
    else cout << maxi-1 << endl;

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