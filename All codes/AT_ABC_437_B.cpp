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
    ll h , w , n ; cin >> h >> w >> n;
    vector<vector<ll>>v(h,vll(w));
    fl(0,h){
        flj(0,w){
            cin >> v[i][j];
        }
    }
    map<ll,ll>mp;
    ll ansi =0,x,temp=0;
    fl(0,n){
        cin >> x;
        mp[x]++;
    }
    fl(0,h){
        temp=0;
        flj(0,w){
            if(mp[v[i][j]])temp++;
        }
        ansi= max(ansi,temp);
    }
    cout << ansi  << endl;
} 
 
int main() { 
    ios::sync_with_stdio(false); 
    cin.tie(nullptr); 
    
    ll t=1;  
    //cin >> t; 
    while (t--) { 
        siuu(); 
    } 
 
    return 0; 
}

