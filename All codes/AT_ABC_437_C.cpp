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
const int N= 5e5+1;

void siuu(){
    ll n ; cin >> n ;
    vector<pair<ll,ll>>vp,vp2;
    ll x, y;
    ll ansi =0,sm=0;
    fl(0,n){
        cin >> x>> y;
        sm+=x;
        vp.pb({x,y});// wt pow
        vp2.pb({y,x});
    }
    sort(all(vp));
    sort(rall(vp2));
    ll tmp = sm,st=0,cnt=0;
    fl(0,n){
        if(st>=tmp)break;
        tmp-= vp[i].first;
        st+= vp[i].second;
        cnt++;
        //cout << st<<' '<< tmp << ' '<<cnt<<endl;
    }
    ansi= max(ansi,n-cnt);
    cnt=0;st=0;
    fl(0,n){
        if(st>=sm)break;
        st+= vp2[i].first;
        sm-=vp2[i].second;
        cnt++;
        //cout << st<<' '<< sm << endl;

    }
    ansi= max(ansi,n-cnt);
    cout << ansi << endl;
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

