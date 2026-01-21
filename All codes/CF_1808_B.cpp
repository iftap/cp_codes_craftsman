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
vector<bool> isprm(1e4+1,1);
void seive(){
    isprm[0] = isprm[1] = 0;
    for(ll i =2;i*i<=1e4;i++){
        if(isprm[i]){
            for(ll j = i*i;j<=1e4;j+=i){
                isprm[j]=0;
            }
        }
    }
    fl(2,1e4){
        if(isprm[i])pr_div.pb(i);
    }
}


void siuu(){ 
    ll n, m,ans=0;cin >> n >> m;
    vector<vector<int>> v(m, vector<int>(n));
    fl(0,n){
        flj(0,m){
            cin >> v[j][i];
        }
    }
    ll ansi=0;
    fl(0,m){
        sort(all(v[i]));
        flj(0,n){
            ansi+=(2*(j+1)-n-1)*v[i][j];
        }
        
    }
    cout << ansi << endl;

    // 0 1 x<n/2 2/3  0 1 2 3 4
    //2*5-5-1


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
