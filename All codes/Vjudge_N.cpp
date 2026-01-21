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

void ottarmarebap(){
    ll n ,k; cin >> n >>k ;
    ll pair =0,x,sm=0;
    ll M= 998244353;
    while(k--){
        cin >> x;
        sm+=x;
        pair+= (x/2);
    }
   if (pair>=n)cout <<0 << endl;
    else {
        ll ans= (n-pair);
        if(sm-2*pair < n-pair){
           // ans+= (2*n-sm);
            ll temp = n-pair -(sm-2*pair);
            ans+=temp;
            ans= ans%M;
        }
        cout << ((ans)%M+M)%M << endl;
    }
    
    
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll t=1; 
    //cin >> t;
    while (t--) {
        ottarmarebap();
    }

    return 0;
}

