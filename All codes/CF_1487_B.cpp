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
    ll n,k;cin >> n >> k;
    if(n%2==0 || k<=n/2){
        ll zz= k%n;
        if(k%n==0) zz =n;
        cout << zz<< endl;
        return;
    }
    ll temp =k;
    temp ++;
    temp += (k-(n/2+1))/(n/2);
    ll ans =temp%n;
    if(ans==0) ans=n;
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