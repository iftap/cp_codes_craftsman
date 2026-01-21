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
    ll a,b,k;
    cin >>a >>b >>k;
    ll gg = __gcd(a,b);
    ll lefo = (a+k-1)/k,ri = (b+k-1)/k;
    ll hht = max(lefo,ri);
    if(gg>=hht) cout << 1 << endl;
    else cout << 2 << endl;
    
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









