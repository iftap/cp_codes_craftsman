#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define cy cout << "YES\n"
#define cn cout << "NO\n"
#define fl(s,e) for(int i=s;i<e;i++)


void ottarmarebap(){
    ll n; cin >>n ;
    ll neg =0,sum=0,mini=LLONG_MAX,x;
    fl(0,n){
        cin >> x;
        if(x<0){
            neg++;
            x*= (-1);
        }
        sum += x;
        mini= min(mini,x);
    }
    if(neg%2  !=0) sum-= 2*mini;

    cout << sum << endl;

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