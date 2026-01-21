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

 ll n ,k ,a,b; 
 vll v;
bool good(ll x){
    ll cnt=0,temp=0;
    fl(0,n){
        if(temp+v[i]>x){
            cnt++;
            temp=0;
        }
        temp+=v[i];
    }
    if(temp>0)cnt++;
    return cnt<=k;
}
// 0000000111111
void ottarmarebap(){
    ll n ; cin >> n ;
    vll v(n);
    set<ll> st;
    fl(0,n){
         cin >> v[i];
         st.insert(v[i]);

    }
    cout << st.size() << endl;

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


