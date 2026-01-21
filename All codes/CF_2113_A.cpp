#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define cy cout << "YES\n"
#define cn cout << "NO\n"
#define fl(s,e) for(int i=s;i<e;i++)





void ottarmarebap(){
    ll k,a,b,x,y,ans=0; cin >> k >>a >>b >>x >>y;
   
    if(x>y){
        swap(a,b);
        swap(x,y);
    }
    
    if(k>=a){
        ans= ((k-a)/x) +1;
        
    } 
    k-= ans*x;
    if(k>=b){
        ans+=((k-b)/y +1);
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