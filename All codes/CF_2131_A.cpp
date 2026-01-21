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


void ottarmarebap(){
    ll n; cin >>n;
    vll a(n),b(n);
    fl(0,n) cin >>a[i];
    fl(0,n) cin >> b[i];
    ll ans =0;
    fl(0,n) {if(a[i]>b[i])ans+=a[i]-b[i];}
    cout << ans+1<< endl;
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

