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
vll pr_div;
ll M=1e5;
vector<bool> isprm(M+9,1);
void seive(){
    isprm[0] = isprm[1] = 0;
    for(ll i =2;i*i<M;i++){
        if(isprm[i]){
            for(ll j = i*i;j<=M;j+=i){
                isprm[j]=0;
            }
        }
    }
    fl(2,M){
        if(isprm[i])pr_div.pb(i);
    }
}
ll lcm(ll a,ll b) {
    return (a / gcd(a, b)) * b;
}

void siuu(){
    ll n; cin >> n ;
    vll v(n);
    ll sum =0;
    map<ll,ll>m1,dbl;
    ll gg;
    fl(0,n){
        cin >> v[i];
       // if(m1[v[i]])dbl[v[i]]++;
        m1[v[i]]++;
        sum+=v[i];
    }
    vll ansi;
    vll recheck;
    fl(0,n){
        if((sum-v[i])%2)continue;
        if(m1[(sum-v[i])/2]){
            if(((sum-v[i])/2)==v[i] && m1[(sum-v[i])/2]==1)continue;
            //if(dbl[(sum-v[i])/2])recheck.pb((sum-v[i])/2);
            //else 
            ansi.pb(i+1);
        }
    }
   // if(recheck.sz>0){
     //   fl(0,recheck.sz){
       //     flj(0,n){
         //       if(v[j]==recheck[i])ansi.pb(i+1);
           // }
        //}
    //}
    cout << ansi.sz<<endl;
    fl(0,ansi.sz)cout << ansi[i]<<' ';
    cout << endl;
    

} 
 
int main() { 
    ios::sync_with_stdio(false); 
    cin.tie(nullptr); 
   // seive();
    ll t=1;  
    //cin >> t; 
    while (t--) { 
        siuu(); 
    } 
 
    return 0; 
}
