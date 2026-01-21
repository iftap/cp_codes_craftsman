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
void sieve(int n) {
    vector<bool> is_prime(n + 1, true); // assume all numbers are prime
    is_prime[0] = is_prime[1] = false;  // 0 and 1 are not prime

    for (int i = 2; i * i <= n; i++) {
        if (is_prime[i]) {
            for (int j = i * i; j <= n; j += i)
                is_prime[j] = false;
        }
    }

    // Print all primes
    for (int i = 2; i <= n; i++) {
        if (is_prime[i])
            cout << i << " ";
    }
    cout << endl;
}
// __builtin_popcount(n) (GCC)

void ottarmarebap(){
    ll n ,ans=0; cin >> n;
    bool gg =1;
    vll v (n);
    fl(0,n) cin >> v[i];
    
    vll pf(n+1),dv;
    pf[0]=0;
    fl(0,n) pf[i+1]=pf[i]+v[i];
    

    for(ll i =1;i<=n/2;i++){
        if(n%i) continue;
        vll tt;
        for(ll j =i; j<=n;j+=i){
            tt.pb(abs(pf[j]-pf[j-i]));
        }
        sort(all(tt));
        ans= max(ans,tt[tt.size()-1]-tt[0]);
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


