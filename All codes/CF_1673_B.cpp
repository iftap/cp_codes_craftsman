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
    set<char> st;
    fl(0,s.size()) st.insert(s[i]);
    if(st.size()<2){
        cy;return;
    }
    ll sz= st.size();
    bool gg =1;
    fl(0,s.size()-sz){
        if(s[i]!=s[i+sz]){
            gg=0;break;
        }
    }
    if(gg) cy;
    else cn;


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