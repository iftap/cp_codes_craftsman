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


void ottarmarebap(){
    ll n; cin >>n;
    if(n==2){
        cout <<"-1 2\n";return;
    }
    fl(1,n){
        if(i%2)cout <<"-1 ";
        else cout <<"3 ";
    }
    if(n%2) cout <<"-1\n";
    else cout <<"2\n";

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

