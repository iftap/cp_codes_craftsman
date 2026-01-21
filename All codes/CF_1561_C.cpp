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
    ll  n ; cin >> n ; 
    vector<pair<ll,ll>>pv;
    fl(0,n){
        ll k ; cin >> k ; 
        ll temp=0;
        flj(0,k){
            ll x; cin >> x;
            temp = max(temp,x-j+1);
        }
        pv.pb({temp,k});
    }
    sort(all(pv));
    ll ansi =pv[0].first;
    ll ad=0;
    fl(0,n){
        if(pv[i].first>ansi){
            ad+=(pv[i].first-ansi);
            ansi=pv[i].first;
        }
        ansi+=pv[i].second;

    }
    cout << pv[0].first+ad<<endl;
} 
 
int main() { 
    ios::sync_with_stdio(false); 
    cin.tie(nullptr); 
    //seive();
    ll t=1;  
    cin >> t; 
    while (t--) { 
        siuu(); 
    } 
 
    return 0; 
}
