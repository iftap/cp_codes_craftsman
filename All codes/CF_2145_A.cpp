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
#include<numeric>
#define sz size()

 //ll n ,k ,a,b; 
 //vll v;


 /// et ahocche first e maximum distance ber kora then oitar basis e min ,,heheb0iiii
// maxiii..    111111100000000  karon divide it by k cnt><k
void ottarmarebap(){
    ll n , k ; cin >> n ;
    if(n%3)cout << 3- n%3 << endl;
    else cout << 0 << endl;
    
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


