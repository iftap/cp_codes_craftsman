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
    ll n ; cin >> n ;
    vll a(n+1),b(n+1);
    map<ll,bool> mp;
    ll cnt =0,ans=0;
    fl(1,n+1)cin >> a[i];
    fl(1,n+1)cin >> b[i];
    vll c(n+1);
    fl(1,n+1) c[b[i]]=i;
     cnt =c[a[1]];
     fl(1,n+1){
        if(c[a[i]]<cnt)ans++;
        cnt= max(cnt,c[a[i]]);
     }
    cout << ans <<endl;
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll t=1; 
    //cin >> t;
    while (t--) {
        ottarmarebap();
    }

    return 0;
}
