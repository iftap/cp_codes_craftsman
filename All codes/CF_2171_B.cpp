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
ll M=1e6;
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

vll good(1e6+1,1);
vll maxi(M+1,0),ansi(M+1,0);
void gg(){
    fl(2,M){
        if(isprm[i]){
            ll tt =i;
            flj(0,4){
                if(tt>=M)break;
                good[tt]= -1;
                tt*=i;
            }
            flj(0,pr_div.sz){
                if(pr_div[j]*i>M || pr_div[j]>i)break;
                good[pr_div[j]*i]=-1;
               /* ll nnn= (((i*i))*pr_div[j])%LLONG_MAX;
                if(nnn <M)good[nnn]=-1;
                nnn=(((i*pr_div[j]))*pr_div[j])%LLONG_MAX;
                if(nnn <M)good[nnn]=-1;
                */
            }
            
        }
    }
    fl(1,13) maxi[i]=ansi[i]=i;
    fl(13,M){
        ansi[i]= ansi[i-1];
        ansi[i]+=good[i];
        if(ansi[i]<0)ansi[i]=0;
        maxi[i]=max(maxi[i-1],ansi[i]);
    }
    
}
void siuu(){
    ll d , tt;cin >> d >> tt;
    if(d<=maxi[tt])cy;
    else cn;
} 
 
int main() { 
    ios::sync_with_stdio(false); 
    cin.tie(nullptr); 
    seive();
    gg();
    ll t=1;  
    cin >> t; 
    while (t--) { 
       siuu(); 
    } 
    //fl(1,1000000){
       //cout << i << ' '<< isprm[i]<< ' '<<good[i]<<' '<< maxi[i]<<' '<<ansi[i]<<endl;
   // }
 
    return 0; 
}