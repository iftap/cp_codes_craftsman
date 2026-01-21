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

void ottarmarebap(){
    int n,q,x; cin >> n >> q;
    vector<int> v(51,n+1);
    v[0]=0;
    fl(0,n){
        cin >> x;
        v[x]= min(v[x],(i+1));
    }
    fl(0,q){
        cin >> x;
        cout << v[x] << ' ';
       
        for(int j=1;j<51;j++){
            if(v[j]){
                if(v[j]<v[x]) v[j]++;
            }
        }
        v[x]=1;
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