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


 /// et ahocche first e maximum distance ber kora then oitar basis e min ,,heheb0iiii
bool good(ll x){
    ll temp =k;
    temp-=(x-v[n/2]);
    fl(n/2+1,n){
        if(x>v[i]){
            if(temp<(x-v[i]))return 0;
            else temp-=(x-v[i]);
        }
    }
    return 1;
}
//fpr maxiii..    111111100000000  karon divide it by k cnt><k
void ottarmarebap(){
   cin >> n>>k;
   ll l =0,r=0;
   v.resize(n,0);
   fl(0,n) cin >> v[i];
   sort(all(v));
   l=v[n/2];
   r=v[n/2]+k+1;
   
   while(l+1<r){
        ll m= l+(r-l+1)/2;
        if(good(m))l=m;
        else r=m;
   }
   cout <<l<<endl;
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


