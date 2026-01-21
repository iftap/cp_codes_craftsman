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
    ll n; cin >> n;
    vll v(n),srt,pf(n+1),c;
    vector<bool> b;
    fl(0,n) cin >> v[i];
    srt=v;
    sort(all(v));
    pf[0]= v[0];
    c.pb(0);
    fl(1,n){
        pf[i]= srt[i]+pf[i-1];
        if(pf[i]<v[i+1]) c.pb(i+1);
    }
    map<ll,ll>mp;
    ll k=0;
    c.pb(n-1);
    fl(0,n){
        mp[v[i]]=c[k];
        if(i==k)k++;
    }

    fl(0,n){
        cout << mp[v[i]] << ' ';
    }
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