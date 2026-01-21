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

// __builtin_popcount(n) (GCC)

void ottarmarebap(){
    ll n ,ans=0; cin >> n ; 
    string s ; cin >> s;
    vector<bool> b(n+1,false);
    fl(1,n+1){
        if(s[i-1]=='0'){
            for(ll j=i;j<=n;j+=i){
                if(s[j-1]=='1') break;
                if(b[j]) continue;
                else{
                    b[j]=1;
                    ans+=i;
                }
            }
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