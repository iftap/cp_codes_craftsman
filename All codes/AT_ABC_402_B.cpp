#include <bits/stdc++.h> 
using namespace std; 
#define ll long long 
#define pb push_back 
#define all(v) v.begin(), v.end() 
#define rall(v) v.rbegin(), v.rend() 
#define cy cout << "YES\n" 
#define cn cout << "NO\n" 
#define fl(s,e) for(int i=s;i<e;i++) 
#define flj(s,e) for(int j=s;j<e;j++) 
#define vll vector<ll> 
#include<numeric> 
#define sz size()
vll v1,v2;
//ll n ;
static const int N = 200001;
vector<ll> g[N];
ll gg;
map<ll,bool> vis;
ll ansi =-1,nnn=0,hq=0;




void siuu(){
    ll n ; cin >> n  ; 
    vll a(n),b(n);
    fl(0,n)cin >> a[i];
    fl(0,n)cin >> b[i];

    ll ev=0,od=0;
    ll aa=0,bb=0;
    fl(0,n){
        if(a[i]!=b[i]){
            if((i+1)%2)od++;
            else ev++;
        }
        //else{
            if(a[i]==1){
                aa++;
               
            }
            if(b[i]==1)bb++;
    //}
    }
    aa= aa%2;
    bb = bb%2;
    if(ev==od){
       if(aa==bb){
        cout << "Tie\n";
       }
       if(aa>bb){
        cout << "Ajisai\n";
       }
       else{
        cout << "Mai\n";
       }

       return;
    }
    
    if(od>ev){
        if(od-ev==1){
            if(aa>=bb){
               cout << "Ajisai\n";
            }
            else cout << "Tie\n"; 
        }
        else cout << "Ajisai\n";
    }
    else {
        if(ev-od==1){
            if(aa<=bb){
               cout << "Mai\n";
            }
            else cout << "Tie\n"; 
        }
        else cout << "Mai\n";

    }

    


} 
 
int main() { 
    ios::sync_with_stdio(false); 
    cin.tie(nullptr); 
    
    ll t=1;  
    cin >> t; 
    while (t--) { 
        siuu(); 
    } 
 
    return 0; 
}

