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
    string s; cin >> s; 
    ll n = s.size();
    vll arr(26);
    fl(0,n){
        arr[s[i]-'A']++;
    }
    for(ll i =25;i>=0;i--){
        if(arr[i]>0){
            for(ll j=0;j<arr[i];j++) cout << char('A' + i);

        }
    }
    cout << endl;
    
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









