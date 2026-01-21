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

 ll n,m ,k ,a,b,c; 
 vll v ;
 /// 1234321
bool good(ll x){
    ll temp=0;
    if(x<=n)temp= x*(x+1)/2;
    else{
      temp= n*(n+1)/2;
      ll gg=  (n-1)*(n)/2;
      ll ss = 2*n-x;
      gg-= ss*(ss-1)/2; 
      temp+=gg;
    }
    
    return temp<=k;
}
ll god(ll x){
    ll temp=0;
    if(x<=n)temp= x*(x+1)/2;
    else{
      temp= n*(n+1)/2;
      ll gg=  (n-1)*(n)/2;
      ll ss = 2*n-x;
      gg-= ss*(ss-1)/2; 
      temp+=gg;
    }
    return temp<k;
}
// 11110000
void ottarmarebap(){
    cin >> n>>k;
    //fl(1,2*n) cout <<i<<" "<< god(i) <<endl;
    ll sts= n*(n+1)/2 + n*(n-1)/2;
    if(k>=sts){
        cout << 2*n-1<<endl;return;
    }
    ll l =1,r=2*n-1,m;
   while(l+1<r){
        m=l+(r-l+1)/2;
        if(good(m))l=m;
        else r=m;
    }
    if(god(l))l++;
    cout << l << endl;
    
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


