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

ll n ,k ,a,b; 
//vll va,vb;
//bool ttt;

// 0000000111111
void ottarmarebap(){
    cin >> n ; 
    vll v(n);
    set<ll>st;
    fl(0,n){cin >> v[i];st.insert(v[i]);}
    sort(all(v));
    ll ansi =0;
    while(st.find(ansi)!=st.end())ansi++;
    cout << ansi << endl;
    
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

