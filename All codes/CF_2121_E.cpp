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
    string a,b; cin >> a >> b; 
    ll n= a.size(),ans=0;
    bool gg=0;
    fl(0,n){
        if(a[i]==b[i]) ans+=2;
        else if(-a[i]+b[i]>1) break;
        else if(-a[i]+b[i]==1){
            ans++;
            for(ll j =i+1;j<n;j++){
                if(a[j]=='9' && b[j]=='0')ans++;
                else break;
            }
            break;
        } 
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