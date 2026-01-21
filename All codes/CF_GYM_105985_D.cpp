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
    ll n , f, c,x, y;
        cin >> n>> f >> c >> x >>y;
        bool gg =1;
        ll k=1;
        ll gt = y-x;
         if(f<x){
            cout << "Mission Failed 1\n";
            return;
         }
        if(gt<0){
            ll ttt= f/(-gt);
           // if(f%gt) ttt++;
            if(ttt>=n) cout << "Mission Successful \n";
            else cout << "Mission Failed "<< ttt << endl;
        }
        else {
            cout << "Mission Successful \n";
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