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



void solve() {
    //ll n; cin >> n;
    string a,b ; cin >> a>> b;
    ll ans =0;
    fl(0,a.size()){
        for(ll j=0;j<b.size();j++){
            if(a[i]==b[j]){
                ll x=i+1,y=j+1,temp=1;
                while(x<a.size() &&  y<b.size()){
                   
                    if(a[x]==b[y]) temp++;
                    else break;
                    x++;
                    y++;
                }
                ans= max(ans,temp);

            }
        }
        
    }
    ans*=2;
    ans = a.size()+b.size()-ans;
    cout << ans<< endl;
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