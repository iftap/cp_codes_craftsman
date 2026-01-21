#include <bits/stdc++.h>
using namespace std;
#define ll long long
/*      
eta actualy realize korte hoy
wk ,  a+b = (a^b)+a&b     ---xor properties
ekhane, (a+k)+(b+k)= (a+k)^(b+k) 
so (a+k)&(b&k)=0
in order to get it
let a>b
in order to get x^y =0
x emon ekta bit nite hobe jate set chara sob 0 hoy 
like a = 101010 b-101
a+k = 1000000 b= something
xor of em is definitely 0


*/
void solve() {
    ll a,b; cin >> a>> b;
    if(a==b) cout << "-1" << endl;
    else{
        ll maxi = max(a,b);
        ll temp= maxi;
        
        temp = 1LL<<31;
        cout << temp-maxi << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll t; 
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}