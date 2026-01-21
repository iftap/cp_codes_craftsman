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
    string s,p; cin >> s;
    ll x=0,ans=0,maxi=0,n= s.size();
    fl(0,n){
        if(s[i]=='1') x++;
        else x=0;
        maxi = max(x,maxi);
    }
    if(maxi==n){
        cout << n*n<< endl;return;
    }
    ans= (maxi+1)*(maxi+1)/4;
    ll lef=0,rig=0;
    fl(0,n){
        if(s[i]=='0')break;
        lef++;
    }
    for(ll i=n-1;i>=0;i--){
        if(s[i]=='0') break;
        rig++;
    }
    ans= max(ans,(lef+rig+1)*(lef+rig+1)/4);
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


/*

1100011
1110001
1111000

11001
11100
01110

11100111
11110011
11111001
11111100
01111110
00111111
10011111
11001111

*/
