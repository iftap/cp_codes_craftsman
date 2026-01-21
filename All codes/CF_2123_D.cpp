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
    ll n,k; cin >> n >> k;
    string s; cin >> s;
    ll ones=0;
    fl(0,n) {if(s[i]=='1') ones++;}
    if(ones<=k){
        cout << "Alice\n";
        return;
    }
    bool gg=0;
    ll temp=0;
    fl(0,n){
        if(s[i]=='0') temp++;
        else temp=0;
        if(temp==k) {
            gg=1;
            break;
        }
    }
    temp=0;
    ll lgg=0;
    //fl(0,n){
     //   if(s[i]=='1')temp++;
       // if(temp==k) {
         //   lgg= i+1;
           // break;

        //}
    //}
   
    if(gg || (2*k)<=n) cout << "Bob\n";
    else cout << "Alice\n";
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