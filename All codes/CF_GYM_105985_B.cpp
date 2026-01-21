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
    ll a , b ; cin >> a >> b;
   

    
   
    ll temp = a*60 + b;
    ll a1= 11*60,a2= 13*60,a3= 15*60,a4=17*60;
   
    
    if(temp< (9*60))  cout << "NO COFFEE\n";
    else if(temp<a1) cout << a1-temp;
    else if(temp<a2)cout << a2-temp;
    else if(temp<a3)cout << a3-temp;
    else if(temp<a4)cout << a4-temp;
    else {
          cout << "NO COFFEE";
    }
    cout << endl;


}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll t=1; 
    ///cin >> t;
    while (t--) {
        ottarmarebap();
    }

    return 0;
}