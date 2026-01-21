#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define cy cout << "YES\n"
#define cn cout << "NO\n"
#define fl(s,e) for(int i=s;i<e;i++)
void chk(ll n){
    
}







void solve(){
    ll n,k ; cin >> n >> k;
    ll on=0,zr=0,maxi,mini;
    string s; cin >>s;
    fl(0,n){
        if(s[i]=='1')on++;
        else zr++;
    }
    if(zr==n || on==n){
        maxi=n/2;
        mini =maxi;
    }
    else{
        maxi = on/2 + zr/2;
        //if(on%2 !=0 || zr%2 !=0) maxi--;
       
        mini = abs(zr-on)/2;
    }
    if(k<=maxi && k>=mini && (k-mini)%2==0) cy;
    else cn;


}
  
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll t=1; 
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}