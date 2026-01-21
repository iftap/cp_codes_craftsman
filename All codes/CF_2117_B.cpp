#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define cy cout << "YES\n"
#define cn cout << "NO\n"
#define fl(s,e) for(int i=s;i<e;i++)
void chk(ll n){
    
}



void solve(){
    ll n; cin >>n;
    if(n%2==0){
    	for(ll i = 2;i<=n;i+=2) cout << i <<' ';
        for(ll i = n-1;i>0;i-=2) cout << i <<' ';
    }
    else{
    	for(ll i = 1;i<=n;i+=2) cout << i <<' ';
        for(ll i = n-1;i>0;i-=2) cout <<i <<' ';
 }
 cout << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll t=1; 
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}