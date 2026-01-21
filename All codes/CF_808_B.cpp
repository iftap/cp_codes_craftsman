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
    ll n ,k; cin >> n>>k;
    vector<double> v(n),pf(n+2,0);
    double x,ans=0; 
    fl(0,n) cin >> v[i];
    //pf[0]=v[0];
    //pf[n]=0;
    fl(1,n+1) pf[i]= v[i-1]+pf[i-1];
    fl(0,n-k+1){
        double temp = (pf[i+k]-pf[i])/(double)(n-k+1);
        ans+=temp;
    }
   // pf 2 = 1+2   pf1 = 1 



    cout <<fixed<<setprecision(10)<< ans << endl;
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

