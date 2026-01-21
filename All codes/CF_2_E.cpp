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

 ll n,m  ,a,b,c; 
 vector<vector<ll>> v;
// vll tm;
double good(double x){
    
    double ans = x*x;
    ans+= sqrt(x);
    return ans;
    
        
}
// 000000011111111
void ottarmarebap(){
    double n ; cin >> n;
    double l =0.0,r=1e5,mid;
    fl(0,70){
         mid = (l+r)/2;
        double tmp= good(mid);
        
        if(tmp==n)r=mid;
        else l=mid;
    }
    cout << r << endl;
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


