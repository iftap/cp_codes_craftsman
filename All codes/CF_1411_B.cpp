#include <bits/stdc++.h>
using namespace std;
#define ll long long


#define pb push_back
#define all(v) v.begin(), v.end()
#define cy cout << "YES\n"
#define cn cout << "NO\n"
#define fl(s,e) for(int i=s;i<e;i++)

bool chk(ll n){
    ll tm=10,k=n;
   vector <ll> v(10,0);
   bool flag = 1;
   while(k){
    v[k%10]++;
    k/=10;
   }
   fl(1,10){
    if(v[i]>0 && n%i!=0)    return 0;
   }
    return 1;
}


void solve() {
   ll n; cin >> n;
   while(!chk(n)){
        n++;
   }
      cout << n << endl;
    }


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll t; 
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}