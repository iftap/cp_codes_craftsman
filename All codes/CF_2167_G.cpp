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
    ll n ; cin >> n ;
    vll a(n),c(n);
    fl(0,n)cin >> a[i];
    fl(0,n)cin >> c[i];
    ll ansi =LLONG_MAX;
    fl(0,n){
        ll temp=0;
        ll tt=a[i];
        flj(i+1,n){
            if(a[j]<tt)temp+= c[i];
            tt= max(a[j],tt);
        }
        tt= a[i];
        for(ll j = i-1;j>=0;j--){
            if(a[j]>tt)temp+=c[j];
            tt= min(a[j],tt);
        }
        ansi= min(ansi,temp);
    }
    cout << ansi << endl;

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