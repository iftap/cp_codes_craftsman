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
    ll n; cin >> n;
    vll v(n),a(n);
    fl(0,n) cin >> a[i];
    fl(0,n) cin >> v[i];
    v.pb(-1);
    vector<pair<ll,ll> >pr;
    bool gg=1;
    ll st=0,en=0;
    fl(1,n+1){
        if(v[i]>=v[i-1]){
            if(gg){
                st=i-1;
                gg=0;
                en=i;
            }
            
                en=i;
            

        }
        else{

            if(st<n && en<n)pr.pb({st,en});
            st=en= n+2;
            gg=1;

        }
    }
    //pr.pb({st,en});
    pair<ll,ll> ans ={0,0};
    ll maxi =-1;
    fl(0,pr.size()){
        ll tp = pr[i].second - pr[i].first +1;
        bool ss=0;
        for ( ll j = pr[i].first;j<=pr[i].second;j++){
            if(v[j]!=a[j]){
                ss=1;
                break;
            }

        }
        if(ss==1 && tp>=maxi) ans = {pr[i].first+1,pr[i].second+1};
    }
    cout << ans.first << ' '<<ans.second << endl;

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
