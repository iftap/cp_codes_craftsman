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

void ottarmarebap() {
    ll n, ans = 0;
    cin >> n;
    vll yn(n/2),mis(n/2);
    yn.pb(0);mis.pb(0);
    string s1,s2; cin >> s1>>s2;
    if(s1==s2){cy;return;}
    if(n%2){cn;return;}
    for(ll i=1;i<n;i+=2){
        bool on=0,tw=0;
        if(s1[i]==s2[i])on=1;
        if(s1[i-1]==s2[i-1])tw=1;
        if((on^tw)){cn;return;}
        if(on==0|| tw==0)mis[(i)/2]=1;
    }
    ll o=0,z=0;
    
    fl(0,n){
        if(s1[i]=='0')o++;else z++;
        if(i%2){if(z==o)yn[i/2]=1;}
    }
    ll can=0,have=0;
    for(ll i=3;i<n;i+=2){
        
        
       // if(mis[i/2]==1 && yn[i/2]==1 ) {
         //   if(yn[(i+2)/2]==0) {cn;return;}
        //}   if( {}
        if(mis[i/2]==1 &&mis[i/2 -1]==0 && yn[i/2 -1]==0){
             cn;return;
        }
        if(mis[i/2]==1 && yn[i/2]==0){
            
            if( mis[i+1/2]==1)continue;
            cn;
            
        }
    }
    
    cy;
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t = 1;
    cin >> t;
    while (t--) {
        ottarmarebap();
    }
    return 0;
}
