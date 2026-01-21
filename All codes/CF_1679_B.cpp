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
    ll n,x,a,b,t,sm=0; cin >> n >> t;
    vll v(n+1);
    set<ll>st;
    fl(1,n+1) {
        cin >> v[i];
        sm+=v[i];
    }
    bool gg =0,bgg=0;
    ll bb=0;
    while(t--){
        cin >> x;
        if(x==1){
            cin >> a >> b;
            if(gg){
                sm= sm-bb+b;
                st.insert(a);
                v[a]=b;
                gg=0;
            }
            else{
                if((st.find(a) != st.end()) || bgg!=1){
                    sm-=v[a];
                    v[a]=b;
                    sm+=b;
                }
                else{
                    sm-= bb;
                    v[a]=b;
                    sm+=b;
                    
                } 
            }
        }
        else{
            cin >> bb;
            sm = n*bb;
            gg=1;
            st.clear();
            bgg=1;
        }
        cout << sm << endl;
    }

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll t=1; 
    //cin >> t;
    while (t--) {
        ottarmarebap();
    }

    return 0;
}