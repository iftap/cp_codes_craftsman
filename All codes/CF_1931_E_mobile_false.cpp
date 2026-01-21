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
    ll n,m; cin >> n >> m;
    vll v;
    ll ans =0;
    string s;
    fl(0,n){
        cin >> s;
        ans+= s.size();
        ll k=0;
        for(ll j = s.size()-1;j>=0;j--){
            if(s[j]!='0') break;
            k++;
        }
        if(k>0) v.pb(k);
    }
    sort(rall(v));
    for(ll i=0;i<v.size();i+=2) ans-=v[i];

    if(ans>m) cout << "Sasha\n";
    else cout << "Anna\n";
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