#include <bits/stdc++.h>
using namespace std;
#define ll long long


#define pb push_back
#define all(v) v.begin(), v.end()
#define cy cout << "YES\n"
#define cn cout << "NO\n"
#define fl(s,e) for(int i=s;i<e;i++)




void solve() {
     ll n ,m ; cin >> n >> m;
    string s;
    cin >> s;
    ll x=2*(n+m);
    if(s[x-1]=='R' ){
        cout << "NO\n";
        return;
    }
    ll wc=0;
    vector<ll> wi(x+1,0),ri(x+1,0),bi(x+1,0);
    if(s[0]=='W') wi[0]++;
    if(s[0]=='R') ri[0]++;
    if(s[0]=='B') bi[0]++;
    for(ll i=1;i<x;i++){
        wi[i]=wi[i-1];
        bi[i]=bi[i-1];
        ri[i]=ri[i-1];
        if(s[i]=='W') wi[i]++;
        if(s[i]=='R') ri[i]++;
        if(s[i]=='B') bi[i]++;
    }
    
    
    for(ll i=0;i<x;i++){
        
            if(wi[i]<bi[i]){
                 cout << "NO\n";
                 return;
            }
            
            if(wi[i]>(ri[i]+m)){
                cout << "NO\n";
                 return;
            }
        
            
        
     //   if((m+n)-wi[i]>ri[i]){
      //      cout << "NO\n";
      //       return;
      //  }
        

    }

    cout << "YES\n";
        return;
 
    
      
    }


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll t; 
    //cin >> t;
  //  while (t--) {
        solve();
   //}

    return 0;
}