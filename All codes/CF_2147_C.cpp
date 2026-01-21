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
    ll n ; cin >> n;
    string s ; cin>> s;
    // 01010
    bool gg=0;
    if(n==3){
        if(s=="101")cn;
        else cy;
        return;
    }
    if(n==4){
        if(s=="1101"|| s=="1011"){
            cn;return;
        }
        cy;return;
    }
   if (s.find("11011") != string::npos) gg=1;
    if(gg)cn;
    else{
        ll ss=1;
        if (s.find("01010") != string::npos)ss++;
        if(ss%2) cy;
        else cn;
    }
    
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

