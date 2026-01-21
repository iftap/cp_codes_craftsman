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
#define c00 cout << "-1\n"


void ottarmarebap(){
    ll  a,b,x,y; cin >> a>>b >> x >>y;
    if(a-b >=2){
        c00;return;
    }
    if(a-b ==1 ){
        if( (a^1)==b)cout << y <<endl;
        else c00;
        return;
    }
    ll ans=0;
    fl(a,b){
        if(a%2) ans+=x;
        else ans+=min(x,y);
        a++;
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









