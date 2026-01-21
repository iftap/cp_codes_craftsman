#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define cy cout << "YES\n"
#define cn cout << "NO\n"
#define fl(s,e) for(int i=s;i<e;i++)
#define vll vector<ll>
#include<numeric>
#define sz size()

void ottarmarebap(){
    ll n ,k ; cin >> n ;
    vll v(n+2);
    ll maxi=0,maxind=0,l,r;
    fl(1,n+1) {
        cin >> v[i];
        if(v[i]>maxi){
            maxind=i;
            maxi=v[i];
        }
    }
    v[0]=v[n+1]=0;
    l=r=maxind;
    bool gg=0;
    ll zz=n;
    while(zz>0){
        if(v[l-1]==zz-1 || v[r+1]==zz-1){
            if(v[l-1]==zz-1 ) l--;
            else r++;
            zz--;
            continue;
        }
        gg=1;break;
    }
    if(gg)cn;
    else cy;

    
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll t=1; 
    cin >> t;
    while (t--) {
        ottarmarebap();
    }

    return 0;
}

