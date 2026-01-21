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

 //ll n ,k ,a,b; 
 //vll v;


 /// et ahocche first e maximum distance ber kora then oitar basis e min ,,heheb0iiii
// maxiii..    111111100000000  karon divide it by k cnt><k
void ottarmarebap(){
    ll n ; cin >> n;
    vll v(n,0);
    fl(0,n) cin >> v[i];
    ll x ; cin >> x;
    sort( all (v)); 
    ll l=0 , r = n-1,m;
    bool gg  =0;
    ll lef =0,rig =0;
    while( l+1<r){
        m= (r+l)/2;
        //if(v[m]==x){gg=1;break;}//  1122 22 
         if(v[m]<=x)l=m;
        else r=m;
    }
    lef = l;
    while( l+1<r){
        m= (r+l)/2;
        //if(v[m]==x){gg=1;break;}
         if(v[m]>=x)r=m;
        else l=m;
    }
    rig =r;
    cout << rig -lef+1<<endl;

        
    
   
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


