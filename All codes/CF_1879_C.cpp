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
    string s; cin >> s;
    ll n = s.size(),M=998244353,cnt=1;
    vll v;
    fl(1,n){
        if(s[i]==s[i-1]) cnt++;
        else{
            if(cnt>1)v.pb(cnt);
            cnt=1;
        }
    }
    if(cnt>1)v.pb(cnt);
    if(v.size()==0){
        cout <<"0 1\n";return;
    }
    ll typ=0,rs=1;
    for(auto x:v){
        typ+= (x-1);
        rs= (rs*x)%M;
    }
    fl(1,typ+1) rs= (rs*i)%M;
    cout << typ <<" "<< rs << endl;
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

