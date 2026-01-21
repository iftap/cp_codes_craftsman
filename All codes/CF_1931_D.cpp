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


void ottarmarebap(){
    ll n,x,y; cin >> n>> x>> y;
    vll v(n);
    map<ll,vll > mp;
    for(auto &g: v) {cin>> g; mp[g%y].pb(g);}
    ll ans=0;
    for(auto g: mp){
        map<ll,ll> mm;
        vll vv = g.second;
       
        for(auto gg:vv){
            mm[gg%x]++;
              
        }
        for(auto nn:mm){
            if(nn.first==0 || (nn.first == x/2 and x%2 == 0)){ ans+=((nn.second)*(nn.second-1)/2); nn.second=0;}
            else{
                ll c1= nn.second;
                ll c2= mm[x-nn.first];
                ans+= c1*c2;
                mm[x-nn.first]=0;
            }
        }
    }
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

