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
    vll v(n);
    ll sm =0;
    vll pf(n+1,0);
    fl(0,n){
        cin >> v[i];
        sm+= v[i];
        pf[i+1]= pf[i]+v[i];
    }
    if(sm%3){
        cout << "0 0\n";return;
    }
    vll vf(3),vl(3);
    cout << "1 "<< n-1 << endl;
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

