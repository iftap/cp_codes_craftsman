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

/// ll n ,k ,a,b; 
// vll v;

// 0000000111111
void ottarmarebap(){
    ll a , b , c; cin >> a >> b >> c;
    vll v(33,0);
    //if((a & b) == 0 || (b & c) == 0 || (a & c) == 0){
      //   cn;
        //return;
    ///}
    fl(0,31){
        //cout << (1<<i) <<endl;
        if(1<<i & a) v[i]++;
        if(1<<i & b) v[i]++;
        if(1<<i & c) v[i]++;
    }
    fl(0,31){
        //cout <<v[i]<<" "<<i<<endl;
        if(v[i]==2){cn;return;}
    }
    cy;
     /*cout << a<< " "<< b << " " << c<< endl;
      cout << (a & b) << " " << (b & c) << " " << (c & a) << "\n";
      cout << ((a & b)&(b & c)&(c & a))<< endl;*/
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


