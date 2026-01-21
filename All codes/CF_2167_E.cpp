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
    ll n,k , x; cin >> n >>k >> x;
    vll v(n);
    map<ll,ll> mp;
    fl(0,n) {
        cin >> v[i];
        mp[v[i]]++;
    }
    if(n+k>(x+1)){
        fl(0,n)cout <<v[i]<<' ';
        cout << endl;return;
    }
    if(n+k==(x+1)){
        fl(0,x){
            if(mp[i]==0)cout << i << ' ';
            cout << endl;return;
        }
    }


    
    

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
/*
1 2
-1 -1
1 2

30 20
-1 -1
20 10
20 10
20 10

5 2
3 4
2 3
2 3

3 2
4 3
3 2
3 2
2 4

2 3
1 4
1 4
3 1
4 2
1 4
4 2


*/