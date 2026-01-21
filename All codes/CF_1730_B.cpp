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
 vll vx,vt;
/*
n ps tm


v=1
t+ |x-x0| min , how ??
t> max t or les ,,, time er khela bradar time ta min 
time ber kore then pos

00000111

*/
bool good(double x){
    double lef=-1e9,rig=1e9;
    fl(0,n){
       // if(vt[i]>=x){
            //lef= vx[i];
            //rig=vx[i];
       // }
       // else{
            double temp = x-vt[i];
            if(vt[i]>=x) temp=0;
            lef= max(lef,vx[i]-temp);
            rig =min(rig,vx[i]+temp);
       /// }
        //if(lef>rig) return 0;
    }
    ///cout <<x<<" " <<lef <<" " << rig << endl;
     return lef<=rig;

}
double heheboi(double x){
    double lef=-1e9,rig=1e9;
    fl(0,n){
       
            double temp = x-vt[i];
            if(vt[i]>=x) temp=0;
            lef= max(lef,vx[i]-temp);
            rig =min(rig,vx[i]+temp);
       
    }
    
     return (lef+rig)/2.0;
}
void ottarmarebap(){
   cin >> n ;
   vx.resize(n,0);
   vt.resize(n,0);
   fl(0,n) cin >> vx[i];
   fl(0,n)cin >> vt[i];
   double l =0.0,r= 1e9,m;
    fl(0,101){
        m=(l+r)/2.0;
        if(good(m)) r=m;
        else l=m;
    }

    double ansi= heheboi(l);
    cout <<setprecision(9)<< ansi << endl;
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


