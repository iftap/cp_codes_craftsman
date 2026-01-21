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
    ll n ; cin >> n;
    string s ; cin >> s;
    if((s[0]=='0'&& s[1]=='1')|| s[n-1]=='0'&&s[n-2]=='1'){cn;return;}
    fl(1,n-1){if(s[i]=='0'&& s[i-1]=='1'&&s[i+1]=='1'){cn;return;}}
    vll v(n,0);
    ll cnt =0;
    fl(0,n){
        if(s[i]=='1'){
            if(cnt){
                v[i-cnt]=cnt;
                cnt=0;
            }
            continue;
        }
        cnt++;
    }
    if(cnt){
                v[n-cnt]=cnt;
                cnt=0;
            }
    cy;
    fl(0,n){
        if(s[i]=='1') cout << i+1<<' ';
        if(v[i]){
            for(ll j = i+v[i];j>i;j--)cout << j<<' ';
            i+=v[i]-1;
        }
    }
    cout << endl;
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