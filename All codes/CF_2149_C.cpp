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
    ll n; 
    cin >> n;
    string s;
    cin >> s;

    if(n < 3){
        cout << 0 << "\n";
        return;
    }

    vll pa(n+1,0), pb(n+1,0);
    ll la=-1, lb=-1;
    for(int i=0; i<n; i++){
        pa[i+1] = pa[i];
        pb[i+1] = pb[i];
        if(s[i] == 'a'){ 
            pa[i+1]++; 
            la = i+1;
        } else { 
            pb[i+1]++; 
            lb = i+1;
        }
    }

    if(pb[n]==0 || pa[n]==0){
        cout << 0 << "\n";
        return;
    }

    ll fa=-1, fb=-1;
    for(int i=0;i<n;i++) if(s[i]=='a'){ fa=i+1; break; }
    for(int i=0;i<n;i++) if(s[i]=='b'){ fb=i+1; break; }

    ll ans = min(pa[lb]-pa[max(0LL,fb-1)], pb[la]-pb[max(0LL,fa-1)]);
    cout << ans << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t; 
    cin >> t;
    while (t--) {
        ottarmarebap();
    }
    return 0;
}
