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
    ll n ; cin >> n ; 
    string s; cin >>  s;
    vll t;
    fl(0,n){
        if(s[i]=='a') t.pb(1); 
        if(s[i]=='b') t.pb(2); 
        if(s[i]=='c') t.pb(3); 
        if(s[i]=='d') t.pb(4); 
        if(s[i]=='e') t.pb(5); 
        if(s[i]=='f') t.pb(6); 
        if(s[i]=='g') t.pb(7); 
        if(s[i]=='h') t.pb(8); 
        if(s[i]=='i') t.pb(9); 
        if(s[i]=='j') t.pb(10); 
        if(s[i]=='k') t.pb(12); 
        if(s[i]=='l') t.pb(12); 
        if(s[i]=='m') t.pb(13); 
        if(s[i]=='n') t.pb(14); 
        if(s[i]=='o') t.pb(15); 
        if(s[i]=='p') t.pb(16); 
        if(s[i]=='q') t.pb(17); 
        if(s[i]=='r') t.pb(18); 
        if(s[i]=='s') t.pb(19); 
        if(s[i]=='t') t.pb(20); 
        if(s[i]=='u') t.pb(21); 
        if(s[i]=='v') t.pb(22); 
        if(s[i]=='w') t.pb(23); 
        if(s[i]=='x') t.pb(24); 
        if(s[i]=='y') t.pb(25); 
        if(s[i]=='z') t.pb(26); 
        else continue;
    }
    vll v;
    if(n==1){
        cout << "0\n";
        return;
    }
    fl(0,n/2){
        if(t[i]!=t[n-i-1]){
        ll g = t[i]-t[n-i-1];
            if(g<0) g*= (-1);
           
            v.pb(g);
        }
    }
    //if(v.size()==1) cout << "-1\n";
    if(v.size()==0) cout << "0" << endl;
    else{
        ll tt=0;
        fl(0,v.size()){
            tt+= v[i];
        }
        if(tt%2) cout << "-1\n";
        else cout << tt/2 << endl;
    }


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