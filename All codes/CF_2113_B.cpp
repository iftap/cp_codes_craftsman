#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define cy cout << "YES\n"
#define cn cout << "NO\n"
#define fl(s,e) for(int i=s;i<e;i++)


void ottarmarebap(){
    ll w,h,a,b; cin >> w>>h>>a>>b;
    ll x1,y1,x2,y2; cin >> x1>>y1 >>x2 >>y2;
    bool  gg=0;
    ll xx1=x1%a,xx2=x2%a,yy1=y1%b,yy2=y2%b;
    if(xx1<0) xx1= a+xx1;
    if(xx2<0) xx2= a+xx2;
    if(yy1<0) yy1= b+yy1;
    if(yy2<0) yy2= b+yy2;


    
    if(xx1==xx2){
//gg=1; 
if(yy1==yy2) gg=1;
        if(x1!=x2){
             gg=1;
           // else gg=0;
        }
        
    }
    if(yy1==yy2 ){
        if(xx1==xx2) gg=1;
        if(y1!=y2){
            
             gg=1;
            //else gg=0;
        }
    
    }
    //if(y>b && y<2*b && z<a) ggy2=0;
    if(gg) cy;
    else cn;
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