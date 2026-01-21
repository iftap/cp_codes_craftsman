#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n,k,x,vsum=0,sum=0; cin >> n>> k >> x;
    vector<ll> v(n);
    for(ll i =0;i<n;i++){
        cin >> v[i];
        vsum+=v[i];

    }
    sum = vsum*k;
    ll vsum2 = vsum;
    ll cnt =0;
    if(sum< x){
        cout << "0\n" ;
        return;
    }
    if(x%vsum==0){
        cout << ((k-(x/vsum))*n) +1 << endl;
        return;
    }
    ll tempu = x/vsum,temp= x%vsum;
    cnt = (k-tempu)*n;
    for(ll i =n-1;i>=0;i--){
        temp-= v[i];
        cnt--;
        if(temp<=0) break;
    }
    cout << cnt+1 << endl;




}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll t; 
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
