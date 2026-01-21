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
    ll n ; cin  >>n;
    vll a(n); ll sum=0;
    fl(0,n) {
        cin >> a[i];//0 based
        sum+=a[i];
    }
    ll cs=0,mx=0,zz=0;
    // kadanes algorithm
    fl(0,n-1){
        cs+=a[i];
        mx=max(cs,mx);
        if(mx>=sum){cn;return;}
        cs= max(zz,cs);
    }
    cs=0,mx=0;
    fl(1,n){
        cs+=a[i];
        mx=max(cs,mx);
        if(mx>=sum){cn;return;}
        cs= max(zz,cs);
    }
    cy;
     
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

