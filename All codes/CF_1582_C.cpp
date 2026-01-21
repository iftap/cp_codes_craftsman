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
ll cnn(ll l,ll r ,ll a){
    return r/a - ((l-1)/a);
}

void ottarmarebap(){
    ll n ; cin >> n;
    string vs;
    bool gg =0;
    ll ansi =n;
    string s ; cin >> s;
    vs=s;
    reverse(all(vs));
    if(s==vs){cout << "0\n";return;}
    fl(0,26){
        ll cnt=0;
        bool ss=1;
        ll in=0,fn=n-1;
        while(in<=fn){
            
            if(s[in]==s[fn]){
               
                in++;fn--;continue;
            }
            if(s[in]==char('a'+i)){
                in++;
            }
            else if(s[fn]==char('a'+i)){
                fn--;
            }
            else{  ss=0 ;break;}
            cnt++;
        
        }
        if(ss){
            gg=1;
            ansi=min(ansi,cnt);
        }
    }
    if(gg){
        cout << ansi << endl; return;
    }
    cout << "-1\n";

    
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

