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
    ll n,m; cin >> n >> m;
    vll a(n),b(n);
    fl(0,n) cin>> a[i] >> b[i];
    ll ans=0,cm=0,cv=0;
    fl(0,n){
        if(cv==b[i]){
            if(a[i]-cm>1) ans+=(((a[i]-cm)/2)*2);
        }
        else{
            ans++;
            cm++;
            cv=b[i];
            if(a[i]-cm>1) ans+=(((a[i]-cm)/2)*2);
        }
        cm= a[i];
        cv=b[i];
    }

    if(m>cm) ans+=(m-cm);
    //if((m-cm)%2)ans--;
    cout << ans << endl;
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

