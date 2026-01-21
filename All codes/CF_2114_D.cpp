#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define cy cout << "YES\n"
#define cn cout << "NO\n"
#define fl(s,e) for(int i=s;i<e;i++)
void chk(ll n){
    
}


void solve(){
    ll n ; cin >> n;
    vector<ll> x(n),y(n),a,b;
    fl(0,n)   cin >> x[i] >> y[i];
    a=x;
    b=y;
    sort(all(a));
    sort(all(b));
    if(n < 3) cout << n << endl;
    else {
    ll area=LLONG_MAX,h,w;
    fl(0,n){
        if(x[i]==a[0])  h= a[n-1]-a[1]+1;
        else if(x[i]==a[n-1]) h= a[n-2]-a[0]+1;
        else h = a[n-1]-a[0]+1;

        if(y[i]==b[0])  w= b[n-1]-b[1]+1;
        else if(y[i]==b[n-1]) w= b[n-2]-b[0]+1;
        else w = b[n-1]-b[0]+1;
        
        if(h*w < n){
            ll temp = min(h,w);
            h= max(h,w);
            w= temp;
            h++;
        }
        area= min(area,h*w);
    }
    cout << area << endl;}
}
  
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll t=1; 
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}