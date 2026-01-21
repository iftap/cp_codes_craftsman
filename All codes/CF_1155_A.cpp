#include <bits/stdc++.h>
using namespace std;
#define ll long long


#define pb push_back
#define all(v) v.begin(), v.end()
#define cy cout << "YES\n"
#define cn cout << "NO\n"
#define fl(s,e) for(int i=s;i<e;i++)




void solve() {
    ll n; cin >> n;
    string s; cin >> s;
    vector <ll> v(n),w(n);
    fl(0,n){
        int x = s[i]-'a'+1;
        v[i]=x;
        w[i]=x;
    }
    sort(all(w));
    bool flag = false;
    fl(0,n){
        if(v[i]!=w[i]){
           // cy;
            //if(i!=n-1) 
            //cout << i+1 << " "<< i+2 << endl;
            flag =1;
           // else cout << i << " "<< i+1 << endl;
           break;
           // return;
        }
    }
    if(flag){
        fl(0,n){
            if(s[i]>s[i+1]){
                 cy;
                 cout << i+1 << " " << i+2 << endl;
                 return;
            }
         }
    }
    else cn;
      
    }


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll t; 
   // cin >> t;
    //while (t--) {
        solve();
    //}

    return 0;
}