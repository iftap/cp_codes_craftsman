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
vector<bool> isprm(2*1e5+1,1);
void seive(){
    isprm[0] = isprm[1] = 0;
    for(ll i =0;i*i<=2*1e5;i++){
        if(isprm[i]){
            for(ll j = i*i;j<=2*1e5;j+=i){
                isprm[j]=0;
            }
        }
    }
    fl(2,2*1e5){
        if(isprm[i])pr_div.pb(i);
    }
}


void siuu(){ 
    ll n ; cin >> n ;
    ll hudai;
    vll v(n,0);
    ll ec=0;
    fl(0,n) {
        cin >> v[i];
        if(v[i]%2==0)ec++;        // 5 4 3 2 1
    }
    fl(0,n) cin >> hudai;
    if(ec>=2){
        cout << 0 << endl; return;
    }
    vll mp(2*1e5+1,0);
    fl(0,n){
        if(isprm[v[i]]){
            mp[v[i]]++;
            continue;
        }

        ll tt=v[0];
        flj(0,pr_div.sz){
            if(v[i]%pr_div[j]==0){
                mp[pr_div[j]]++;
                while(v[i]%pr_div[j]==0){
                    v[i]/=pr_div[j];
                }
                if(pr_div[j]>v[i]*v[i])break;
            }
            if(v[i]==1)break;
        }
        v[i]=tt;
    }
    fl(0,pr_div.sz){
        if(mp[pr_div[i]]>=2){
            cout << 0 << endl;return;
        }
    }
    if(ec==1){cout << 1 << endl;return;}
    else{
        fl(0,pr_div.sz){
            if(mp[pr_div[i]]>0){
                flj(0,n){
                    if(v[j]%pr_div[i]==(pr_div[i]-1)){
                        cout << 1 <<endl; return;
                    }
                }
            }
        }
    }
    cout << 2 << endl;


} 
 
int main() { 
    ios::sync_with_stdio(false); 
    cin.tie(nullptr); 
    seive();
    ll t=1;  
    cin >> t; 
    while (t--) { 
        siuu(); 
    } 
 
    return 0; 
}