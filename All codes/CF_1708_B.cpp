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
    ll n,l ,r; cin >> n >> l >> r;
    bool gg =1,ss=1;
    vll v;
    fl(1,n+1){
        
        
        ll lef= l/i,rig= r/i;
        if((lef*i)>=l && (lef*i)<=r) v.pb(lef*i);
        else if((rig*i)>=l && (rig*i)<=r) v.pb(rig*i);
        else{
            ss=0;break;
        }
        
    }
    if(ss){
        cy;
        for(auto y :v) cout << y <<' ';
        cout <<endl;
    }
    else cn;
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


