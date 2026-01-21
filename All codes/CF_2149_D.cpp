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
    string s;cin >>s;
    if(n<3){cout<<0 << endl;return;}
    //vll pa(n+1,0),pb(n+1,0);
    ll la=-1,fa=-1,fb=-1,lb=-1,ans=0;
    string gg=s;
    sort(all(gg));
    if(gg[0]==gg[n-1]){cout<<0<<endl;return;}
    fl(0,n){if(s[i]=='a'){fa=i;break;}}
    fl(0,n){if(s[i]=='b'){fb=i;break;}}
    for(ll i =n-1;i>=0;i--){if(s[i]=='a'){la=i;break;}}
    for(ll i =n-1;i>=0;i--){if(s[i]=='b'){lb=i;break;}}
    ll ac=0,bc=0;
    fl(fa,la){if(s[i]=='b')bc++;}
    fl(fb,lb){if(s[i]=='a')ac++;}
    ans=min(ac,bc);
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

