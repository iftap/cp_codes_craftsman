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

ll sq,sm,c,n;


 ll chkr(ll x){
    ll temp (sq+ (sm*x)+(n*x*x));
    return temp;
 }


    void solve() {
         cin >> n >> c;
        ll x;
        sq=0,sm=0;
        ll  ans=0;
        fl(0,n){
            cin >> x;
            sm+=x;
            sq+=(x*x);
        }
        sm*=2;
        bool found =0;

        if(sq==c){
            cout << "0" << endl; return;
        }
        ll low=1,hig=1000000000,mid=hig/2,tmpp;
        
        while(!found){
            tmpp =chkr(mid);
            if(tmpp==c){
                cout << mid/2 <<endl; return;
            }
            else if(tmpp<c){
                low = mid+1;
                mid = (low+hig) /2;
            }
            else{
                hig = mid-1;
                mid = (low+hig) /2;
            }
        }
        

        
         

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