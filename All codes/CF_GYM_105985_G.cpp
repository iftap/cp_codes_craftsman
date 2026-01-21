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
    ll n , x; cin >>  n >> x;
    bool gg =1;
    vll v(n);
    cin >> v[0];
    
    ll tt = v[0]%x;
    ll mini= v[0],maxi = v[0];
    fl(1,n){
        cin >> v[i];
        ll llg = v[i];
        if(v[i]<0){
            llg =x +v[i]%x;
        }
        if(llg%x != tt) gg=0;
       // mini = min(mini,v[i]);
        //maxi = max(maxi,v[i]);

    }
    if(n==1){
        cy;
        cout << "0 0 0\n";
        return;
    }
    bool ss=0;
    if(x<0){
        x*=(-1);
        ss=1;
    }
    ll a,b,c;
    a=b=0;
    c= LLONG_MAX;
    vll aa(n),bb(n),cc(n);
    aa[0]=0,bb[0]=0;
    if(gg && x!=0){
        sort(all(v));
        fl(1,n){
            
            a+=(v[i]-v[0])/x;
            aa[i]= a;
        }
        for(ll i = n-2;i>=0;i--){
            
             b+= (v[n-1]-v[i])/x;

            bb[i]=b;
        }
        fl(0,n){
            c = min(aa[i]+bb[i],c);
        }
        cy;
        if(ss) cout << b <<" "<< a << " "<< c << endl;
        cout << a <<" "<< b << " "<< c << endl;
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