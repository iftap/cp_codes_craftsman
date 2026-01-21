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
    ll n,maxi=LLONG_MIN,mini=LLONG_MAX;; cin >> n;
    vll v (n),an(n),mxr(n),mxl(n),mnl(n),mnr(n);
    fl(0,n){
        cin >> v[i];
        
    } 
    mnl[0] = v[0];
    fl(1,n) mnl[i]=min(mnl[i-1],v[i]);

    mxr[n-1]=v[n-1];
    for(int i = n-2;i>=0;--i)mxr[i] = max(mxr[i + 1], v[i]);

    an[0]= an[n-1]=1;
    an[0]=an[n-1]=1;
    fl(1,n-1){
        if(v[i]<=mnl[i-1] || v[i] >= mxr[i+1]) an[i] = 1;
    }
    fl(0,n) cout << an[i];
    cout << endl;
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