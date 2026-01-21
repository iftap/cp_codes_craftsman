#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define cy cout << "YES\n"
#define cn cout << "NO\n"
#define fl(s,e) for(int i=s;i<e;i++)





void ottarmarebap(){
    ll n ,k,x; cin >> n;
    vector<ll> v(n);
    fl(0,n) cin >> v[i];
    ll i=0,j=n-1,lef=0,rig=0,ans=0;
    while(i<=j){
        if(lef==rig && i<j){
            ans= max(ans,i + (n - j-1 ));
            lef+=v[i];
            rig+=v[j];
            i++;j--;
        }
        else if(lef>rig){
            rig+=v[j];
            j--;
        }
        else{
            lef+=v[i];
            i++;
        }
       // if(lef==rig && i<j ) ans= max(ans,i+(n-j-1));
        
    } 
  //  if(lef==rig ) ans= max(ans,i+(n-j));
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