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
    ll n ,k; cin >> n  ;
    vll a(n+1,0),b(n+1,0),c(n+1);
    ll maxi=-1,mini=LLONG_MAX,ind;
    fl(1,n+1) { cin >> a[i];maxi= max(maxi,a[i]);mini = min(mini,a[i]);}
    fl(1,n+1) { cin >> b[i];maxi= max(maxi,b[i]);mini = min(mini,b[i]);}
    cout << maxi - mini<< ' ';
    fl(2,n/2+1){
        ll ansi =abs(a[i]-b[i]);
        for(ll j =i;j<=n;j+=i){
            for(ll k =j;k<=n;k+=i){
                if(__gcd(j,k)==i){
                ansi = max(ansi,abs(a[k]-b[j]));
                ansi = max(ansi,abs(a[j]-b[k]));
                }
            }
        }
        cout << ansi << " ";
    }
    fl(n/2+1,n+1){
        cout << abs(a[i]-b[i])<< ' ';
    }
    cout << endl;
    
    
    
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

